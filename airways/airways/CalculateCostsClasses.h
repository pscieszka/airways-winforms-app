#pragma once
#include <cmath>
/**
 * @brief Struktura reprezentujaca stale wartosci samolotu Airbus.
 */
struct Airbus {
	int normalSeats = 90;
	int buisnessSeats = 24;
	int firstClassSeats = 12;
	double maxPassengers = 126.0;
	double fuelConsumption = 4200.0;
	int additionalCosts = 0;
	double multiplier = 0.97;

};
/**
 * @brief Struktura reprezentujaca stale wartosci samolotu Boeing.
 */
struct Boeing {
	int normalSeats = 126;
	int buisnessSeats = 0;
	int firstClassSeats = 12;
	double maxPassengers = 138.0;
	double fuelConsumption = 5000.0;
	int additionalCosts = 0;
	double multiplier = 1.11;

};

/**
 * @brief Funkcja obliczajaca koszt lotu.
 * @tparam T - Typ struktury reprezentujacej samolot (Airbus lub Boeing).
 * @tparam T2 - Typ danych dla odleglosc podrozy.
 * @param plane - Struktura reprezentujaca samolot.
 * @param distance - Dystans lotu.
 * @return Koszt lotu.
 */
template <typename T,typename T2>
T2 calculateCost(const T& plane, T2 distance) {
	int base = 3254;
	double passengersNumber = plane.normalSeats + plane.buisnessSeats + plane.firstClassSeats;
	double occupancy = passengersNumber / plane.maxPassengers;
	T2 cost = plane.normalSeats * 14 + plane.buisnessSeats * 24 + plane.firstClassSeats * 43 +
		plane.fuelConsumption / 1000 * distance * occupancy * 0.2 * plane.multiplier * 2.6 + plane.additionalCosts + base;
	return cost;

}

/**
 * @brief Klasa reprezentujaca wspolrzedne miasta.
 * @tparam T - Typ danych dla wspolrzednych.
 */
template<typename T>
class CityCoords {
	T x;
	T y;
	
public:
	CityCoords(T x, T y) : x(x), y(y) {}
	CityCoords() : x(T()), y(T()) {}
	/**
* @brief Operator + oblicza odleglosc miedzy dwoma miastami (nie dodaje wspolrzednych)
* @param rhs - Druga para wspolrzednych miasta.
* @return Odleglosc miedzy miastami.
*/
	 T operator+(const CityCoords& rhs) const {
		return calculateDistance(rhs);
	 }
	
	bool operator==(const CityCoords& rhs) const {
		return x == rhs.x && y == rhs.y;
	}
	
	T getX() const {
		return x;
	}

	T getY() const{
		return y;
	}
private:
	/**
 * @brief Funkcja obliczajaca odleglosc miedzy dwoma miastami na podstawie wspolrz�dnych.
 * @param rhs - Druga para wspolrzednych miasta.
 * @return Odleglosc miedzy miastami.
 */
	T calculateDistance(const CityCoords& rhs) const {
		return sqrt(pow(x - rhs.x, 2) + pow(y - rhs.y, 2))*3.98;
	}
};

