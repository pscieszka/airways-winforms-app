#pragma once
#include "Flight.h"
#include <vector>

class flightsList
{
private:
    static flightsList* instance;  // Statyczna instancja klasy

    std::vector<Flight> flights;

    flightsList() = default;  // Prywatny konstruktor, aby uniemożliwić tworzenie instancji z zewnątrz

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

    std::string get(int idx) {
        if (!flights.empty()) {
            return flights[idx].test();
        }
        return "No flights available.";
    }
    int size() {
        return flights.size();
    }
    Flight& operator[](int idx) {
        if (idx >= 0 && idx < flights.size()) {
            return flights[idx];
        }
        return flights[0];
    }
};

// Inicjalizacja statycznej zmiennej klasy
extern flightsList* flights;