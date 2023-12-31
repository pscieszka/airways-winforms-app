#pragma once
#include "Flight.h"
#include <vector>

class flightsList
{
private:
    static flightsList* instance;  // Statyczna instancja klasy

    std::vector<Flight> flights;

    flightsList() = default;  // Prywatny konstruktor, aby uniemo¿liwiæ tworzenie instancji z zewn¹trz

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

    int size() {
        return flights.size();
    }
    Flight& operator[](int idx) {
        if (idx >= 0 && idx < flights.size()) {
            return flights[idx];
        }
        return flights[0];
    }
    void clear() {
        flights.clear();

    }
};

// Inicjalizacja statycznej zmiennej klasy
extern flightsList* flights;