#pragma once
#include "Flight.h"
#include <vector>

class flightsList
{
private:
    static flightsList* instance;  // Statyczna instancja klasy

    std::vector<Flight> flights;

    flightsList() = default;  // prywatny konstruktor aby zapewnic tylko jedna instacje klasy

public:
    // Mozliwosc dostania sie do instacji, w kazdym miejscu w kodzie
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
        return static_cast<int>(flights.size());
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
    ~flightsList() {
        for (int i = 0; i < flights.size(); i++) {
            std::vector<Passenger> passengers = flights[i].getPassengers();
            for (auto& passenger : passengers) {
                delete passenger.baggage;
                passenger.baggage = nullptr;
            }
        }
       
    }
    
};

// przekazanie do kompilatora, ze istnieje ten obiekt
extern flightsList* flights;