#pragma once
#include "Flight.h"
#include <vector>
/**
 * @brief Klasa reprezentuj¹ca listê lotow.
 * Klasa flightsList jest singletonem, co oznacza, ze moze istniec tylko jedna
 * instancja tej klasy w programie.
 */
class flightsList
{
private:
    static flightsList* instance;  /* Statyczna instancja klasy */

    std::vector<Flight> flights;   /* Wektor przechowujacy loty */


    flightsList() = default;  // prywatny konstruktor aby zapewnic tylko jedna instacje klasy

public:
    /**
 * @brief Metoda getInstance() pozwala uzyskac dostep do instancji klasy.
 * Jesli instancja nie istnieje, zostanie utworzona nowa.
 * @return Wskaznik do instancji klasy flightsList.
 */
    static flightsList* getInstance() {
        if (!instance) {
            instance = new flightsList();
        }
        return instance;
    }
    /**
  * @brief Dodaje lot do listy.
  * @param f - Lot do dodania.
  */
    void add(Flight f) {
        flights.push_back(f);
    }

    int size() {
        return static_cast<int>(flights.size());
    }

    /**
     * @brief Operator [] pozwalajacy uzyskac dostep do lotu o danym indeksie.
     * Jesli indeks jest spoza zakresu, zwraca pierwszy lot na liœcie.
     * @param idx - Indeks lotu.
     * @return Referencja do lotu o danym indeksie.
     */
    Flight& operator[](int idx) {
        if (idx >= 0 && idx < flights.size()) {
            return flights[idx];
        }
        return flights[0];
    }
    /**
 * @brief Czysci liste lotow.
 * Funkcja jest uzywana podczas wczytywania danych z pliku.
 */
    void clear() {
        flights.clear();

    }
    /**
 * @brief Destruktor klasy.
 * Zwalnia pamiec zaalokowana dla bagazu pasazerow we wszystkich lotach.
 */
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