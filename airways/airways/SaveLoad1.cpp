#include "SaveLoad1.h"
#include "HandLuggage.h"
#include "Form1.h"
#include "Map2.h"
#include <fstream>

System::Void airways::SaveLoad1::buttonSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::ofstream file("test.bin", std::ios::binary);
    if (!file.is_open()) {
        
        return;
    }
    if (!file.good()) {

        file.close();  
        return;
    }
    int flightsSize = flights->size();
    file.write(reinterpret_cast<char*>(&flightsSize), sizeof(int));
    for (int i = 0; i < flightsSize; i++) {
        //flight
        std::vector<std::string> flightData = (*flights)[i].getDataRaw();

        int dataSize = flightData.size();
        file.write(reinterpret_cast<char*>(&dataSize), sizeof(int));

        for (const auto& data : flightData) {
            int stringSize = data.size();
            file.write(reinterpret_cast<char*>(&stringSize), sizeof(int));
            file.write(data.c_str(), stringSize); //const char*
        }
        /*
        passengers
        std::vector<Passenger> passengerData = (*flights)[i].getPassengers();
        int passengerSize = passengerData.size();
        file.write(reinterpret_cast<char*>(&passengerSize), sizeof(int));

        for (int j = 0; j < passengerSize; j++) {
            std::vector<std::string> passdata = passengerData[j].getData();
            for (const auto& data : passdata) {
                int stringSize = data.size();
                file.write(reinterpret_cast<char*>(&stringSize), sizeof(int));
                file.write(data.c_str(), stringSize); 
            }
        }
        */


    }


    file.close();
}

System::Void airways::SaveLoad1::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::ifstream file("test.bin", std::ios::binary);
    if (!file.is_open()) {
        //to do
        return;
    }
    if (!file.good()) {

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

        if (flightData.size() >= 8) {
            Flight newFlight(
                flightData[0],  // departure
                flightData[1],  // destination
                std::stoi(flightData[2]),  // distance
                std::stoi(flightData[3]),  // time
                flightData[4],  // date
                flightData[5],  // gate
                flightData[6],  // aircraft
                flightData[7]   // flightDuration
            );

            flights->add(newFlight);
        }
        else {
            // Handle the case where the loaded data does not match the expected format
            // Display an error message or log the issue
            MessageBox::Show("Invalid data format in the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            flights->clear();  // Clear the flights vector as it might be in an inconsistent state
            break;  // Exit the loop to avoid further issues
        }
    }
    

     



    file.close();
}
