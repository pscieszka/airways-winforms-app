#include "SaveLoad1.h"
#include "HandLuggage.h"
#include "Form1.h"
#include <fstream>

System::Void airways::SaveLoad1::buttonSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::ofstream file("test.bin", std::ios::binary);
    if (!file.is_open()) {
        MessageBox::Show("Cannot open file: test.bin", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    std::vector<std::string> flightData = (*flights)[0].getData();

    // Zapisz liczbê elementów w wektorze
    int dataSize = flightData.size();
    file.write(reinterpret_cast<char*>(&dataSize), sizeof(int));

    // Zapisz ka¿dy element wektora do pliku
    for (const auto& data : flightData) {
        int stringSize = data.size();
        file.write(reinterpret_cast<char*>(&stringSize), sizeof(int));
        file.write(data.c_str(), stringSize);
    }

    file.close();
}

System::Void airways::SaveLoad1::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::ifstream file("test.bin", std::ios::binary);
    if (!file.is_open()) {
        MessageBox::Show("Cannot open file: test.bin", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    flights->clear();

    // Odczytaj liczbê elementów w wektorze
    int dataSize;
    file.read(reinterpret_cast<char*>(&dataSize), sizeof(int));

    std::vector<std::string> flightData;

    // Odczytaj ka¿dy element wektora z pliku
    for (int i = 0; i < dataSize; ++i) {
        int stringSize;
        file.read(reinterpret_cast<char*>(&stringSize), sizeof(int));

        std::string data(stringSize, ' ');
        file.read(&data[0], stringSize);

        flightData.push_back(data);
    }

    // Stwórz nowy obiekt Flight za pomoc¹ konstruktora przyjmuj¹cego dane lotu
    Flight newFlight(
        flightData[0],  // departure
        flightData[1],  // destination
        std::stoi(flightData[3]),  // distance
        std::stoi(flightData[6]),  // time
        flightData[4],  // date
        flightData[5],  // gate
        flightData[2],  // aircraft
        flightData[7]   // flightDuration
    );

    flights->add(newFlight);

    file.close();
}
