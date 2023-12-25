#pragma once
#include "Flight.h"
#include <vector>

class flightsList
{
private:
    static flightsList* instance;  // Statyczna instancja klasy

    std::vector<Flight> flights;

    flightsList() = default;  // Prywatny konstruktor, aby uniemo�liwi� tworzenie instancji z zewn�trz

public:
    static flightsList* getInstance() {
        if (!instance) {
            instance = new flightsList();
        }
        return instance;
    }

    void add(Flight f) {
        flights.push_back(f);
    }

    std::string get() {
        if (!flights.empty()) {
            return flights[0].test();
        }
        return "No flights available.";
    }
};

// Inicjalizacja statycznej zmiennej klasy
extern flightsList* flights;