#pragma once
#include <cmath>

struct Airbus {
	int normalSeats = 90;
	int buisnessSeats = 24;
	int firstClassSeats = 12;
	double maxPassengers = 126.0;
	double fuelConsumption = 4200.0;
	int additionalCosts = 0;
	double multiplier = 0.97;

};

struct Boeing {
	int normalSeats = 126;
	int buisnessSeats = 0;
	int firstClassSeats = 12;
	double maxPassengers = 138.0;
	double fuelConsumption = 5000.0;
	int additionalCosts = 0;
	double multiplier = 1.11;

};

template <typename T>
double calculateCost(const T& plane, double distance) {
	int base = 5345;
	double passengersNumber = plane.normalSeats + plane.buisnessSeats + plane.firstClassSeats;
	double occupancy = passengersNumber / plane.maxPassengers;
	double cost = plane.normalSeats * 15 + plane.buisnessSeats * 24 + plane.firstClassSeats * 43 +
		plane.fuelConsumption / 1000 * distance * occupancy * 0.2 * plane.multiplier * 11.29 + plane.additionalCosts + base;
	return cost;

}


template<typename T>
class CityCoords {
	T x;
	T y;
	
public:
	CityCoords(T x, T y) : x(x), y(y) {}

	T operator+(const CityCoords& rhs) const {
		return calculateDistance(rhs);
	}
	bool operator==(const CityCoords& rhs) const {
		return x == rhs.x && y == rhs.y;
	}
	
	T getDistance() { return distance; }
private:
	T calculateDistance(const CityCoords& rhs) const {
		return sqrt(pow(x - rhs.x, 2) + pow(y - rhs.y, 2));
	}
};

