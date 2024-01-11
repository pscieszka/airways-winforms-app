#include <fstream>

#include "CheckedLuggage.h"
#include "Form1.h"
#include "HandLuggage.h"
#include "Map2.h"
#include "SaveLoad1.h"
#include "SmallBag.h"
using namespace System::IO;

bool airways::SaveLoad1::validSave()
{
    bool isValid = true;
    if (String::IsNullOrWhiteSpace(textBoxSave->Text))
    {
        labelErrorSave->Text = "Please fill file field.";
        isValid = false;
    }
    return isValid;
}

bool airways::SaveLoad1::validLoad()
{
    bool isValid = true;
    if (String::IsNullOrWhiteSpace(textBoxLoad->Text))
    {
        labelErrorLoad->Text = "Please fill file field.";
        return false;
    }
    else if (!File::Exists(textBoxLoad->Text)) {
        labelErrorLoad->Text = "File does not exist.";
        isValid = false;

    }
    return isValid;
}

System::Void airways::SaveLoad1::buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
    if (validSave()) {
        std::ofstream file(msclr::interop::marshal_as < std::string>(this->textBoxSave->Text), std::ios::binary);
        if (!file.is_open()) {
            labelErrorSave->Text = "File is not open.";
            return;
        }
        if (!file.good()) {
            labelErrorSave->Text = "File is not good.";

            file.close();
            return;
        }
        int flightsSize = flights->size();
        file.write(reinterpret_cast<char*>(&flightsSize), sizeof(int));
        for (int i = 0; i < flightsSize; i++) {
            // flight
            std::vector<std::string> flightData = (*flights)[i].getDataRaw();

            int dataSize = static_cast<int>(flightData.size());
            file.write(reinterpret_cast<char*>(&dataSize), sizeof(int));

            for (const auto& data : flightData) {
                int stringSize = static_cast<int>(data.size());
                file.write(reinterpret_cast<char*>(&stringSize), sizeof(int));
                file.write(data.c_str(), stringSize);  // const char*
            }

            // passengers
            std::vector<Passenger> passengerData = (*flights)[i].getPassengers();
            int passengerSize = static_cast<int>(passengerData.size());
            file.write(reinterpret_cast<char*>(&passengerSize), sizeof(int));

            for (int j = 0; j < passengerSize; j++) {
                std::vector<std::string> passdata = passengerData[j].getDataRaw();
                int passDataSize = static_cast<int>(passdata.size());
                file.write(reinterpret_cast<char*>(&passDataSize), sizeof(int));

                for (const auto& data : passdata) {
                    int stringSize = static_cast<int>(data.size());
                    file.write(reinterpret_cast<char*>(&stringSize), sizeof(int));
                    file.write(data.c_str(), stringSize);
                }
                std::vector<double> baggageData = passengerData[j].baggage->getData();
                int baggageDataSize = baggageData.size();
                file.write(reinterpret_cast<char*>(&baggageDataSize), sizeof(baggageDataSize));
                for (int k = 0; k < baggageData.size(); k++) {
                    file.write(reinterpret_cast<char*>(&baggageData[k]), sizeof(baggageData[k]));
                
                }
            }
        }
        file.close();
        labelErrorSave->ForeColor = System::Drawing::Color::Green;
        labelErrorSave->Text = "Succes!";
    }

}

System::Void airways::SaveLoad1::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
    if (validLoad()) {
        std::ifstream file(msclr::interop::marshal_as < std::string>(this->textBoxLoad->Text), std::ios::binary);

        if (!file.is_open()) {
            labelErrorLoad->Text = "File is not open.";

            return;
        }
        if (!file.good()) {
            labelErrorLoad->Text = "File is not good.";
            file.close();
            return;
        }
        flights->clear();
        int flightsSize;
        file.read(reinterpret_cast<char*>(&flightsSize), sizeof(int));

        for (int i = 0; i < flightsSize; i++) {
            int dataSize;
            file.read(reinterpret_cast<char*>(&dataSize), sizeof(int));

            std::vector<std::string> flightData;

            for (int j = 0; j < dataSize; j++) {
                int stringSize;
                file.read(reinterpret_cast<char*>(&stringSize), sizeof(int));

                std::string data(stringSize, ' ');
                file.read(&data[0], stringSize);

                flightData.push_back(data);
            }

            Flight newFlight(flightData[0], flightData[1], std::stoi(flightData[2]),
                std::stoi(flightData[3]), flightData[4], flightData[5],
                flightData[6], flightData[7]);

            flights->add(newFlight);

            int passSize;
            file.read(reinterpret_cast<char*>(&passSize), sizeof(int));
            for (int j = 0; j < passSize; j++) {
                std::vector<std::string> passData;
                int passDataSize;
                file.read(reinterpret_cast<char*>(&passDataSize), sizeof(int));

                for (int k = 0; k < passDataSize; k++) {
                    int stringSize;
                    file.read(reinterpret_cast<char*>(&stringSize), sizeof(int));

                    std::string data(stringSize, ' ');
                    file.read(&data[0], stringSize);

                    passData.push_back(data);
                }
                int baggageDataSize;
                file.read(reinterpret_cast<char*>(&baggageDataSize), sizeof(baggageDataSize));
                std::vector<double> baggageSizes(baggageDataSize,0.0);
                for (int g = 0; g < baggageDataSize; g++) {
                    file.read(reinterpret_cast<char*>(&baggageSizes[g]), sizeof(double));
                }
                Baggage* bag = nullptr;
                if (passData[4] == "Small Bag") {
                  
                    bag = new SmallBag(baggageSizes[3], 
                        { static_cast<int>(baggageSizes[0]), static_cast<int>(baggageSizes[1]), 
                        static_cast<int>(baggageSizes[2]) }, true);
                }
                else if (passData[4] == "Hand Luggage") {
                    bag = new HandLuggage(baggageSizes[3],
                        { static_cast<int>(baggageSizes[0]), static_cast<int>(baggageSizes[1]),
                        static_cast<int>(baggageSizes[2]) });

                }
                else {
                    
                    bag = new CheckedLuggage(baggageSizes[3],
                        { static_cast<int>(baggageSizes[0]), static_cast<int>(baggageSizes[1]),
                        static_cast<int>(baggageSizes[2]) }, std::stod(flightData[2]));
                }
                Passenger newPassenger(passData[0], passData[1], passData[2], bag, stoi(passData[3]),false);
                (*flights)[i].addPassenger(newPassenger);
            }
        }
        file.close();
        labelErrorLoad->ForeColor = System::Drawing::Color::Green;
        labelErrorLoad->Text = "Succes!";
    }
    
}

System::Void airways::SaveLoad1::buttonExplorerSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        String^ filePath = openFileDialog->FileName;
        this->textBoxSave->Text = filePath;
    }
}

System::Void airways::SaveLoad1::buttonExplorerLoad_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        String^ filePath = openFileDialog->FileName;
        this->textBoxLoad->Text = filePath;
    }
}
