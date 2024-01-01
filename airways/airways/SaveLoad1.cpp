#include "SaveLoad1.h"
#include "HandLuggage.h"
#include "Form1.h"
#include "SmallBag.h"
#include "CheckedLuggage.h"
#include "HandLuggage.h"
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
        
        // passengers
        std::vector<Passenger> passengerData = (*flights)[i].getPassengers();
        int passengerSize = passengerData.size();
        file.write(reinterpret_cast<char*>(&passengerSize), sizeof(int));

        for (int j = 0; j < passengerSize; j++) {
            std::vector<std::string> passdata = passengerData[j].getDataRaw();
            int passDataSize = passdata.size();
            file.write(reinterpret_cast<char*>(&passDataSize), sizeof(int));

            for (const auto& data : passdata) {
                int stringSize = data.size();
                file.write(reinterpret_cast<char*>(&stringSize), sizeof(int));
                file.write(data.c_str(), stringSize); 
            }
        }
        


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

       
        Flight newFlight(flightData[0], flightData[1], std::stoi(flightData[2]), std::stoi(flightData[3]), flightData[4], flightData[5], flightData[6], flightData[7]);

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
            Baggage* bag = nullptr;
            //dodac wymiary i wage
            if (passData[4] == "Small Bag") {
                bag = new SmallBag(1, { 1,1,1 }, true);
            }
            else if (passData[4] == "Hand Luggage") {
                bag = new HandLuggage(1, { 1,1,1 });

            }
            else {
                bag = new CheckedLuggage(10, { 1,1,1 }, std::stoi(flightData[2]));
            }
            Passenger newPassenger(passData[0], passData[1], passData[2], bag, 12);//stoi(passData[3])
            (*flights)[i].addPassenger(newPassenger);

            
        }
    }
    

     



    file.close();
}
