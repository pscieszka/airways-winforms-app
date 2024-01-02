#pragma once
#include "CalculateCostsClasses.h"
struct Airbus {
	int normalSeats = 90;
	int buisnessSeats = 24;
	int firstClassSeats = 12;
	double maxPassengers = 126.0;
	double fuelConsumption = 4200.0;
	int additionalCosts = 0;
	double multiplier = 0.97;

	Airbus& operator+=(int value);

};

struct Boeing {
	int normalSeats = 126;
	int buisnessSeats = 0;
	int firstClassSeats = 12;
	double maxPassengers = 138.0;
	double fuelConsumption = 5000.0;
	int additionalCosts = 0;
	double multiplier = 1.11;
	Boeing& operator+=(double value);

};

template <typename T>
double calculateCost(const T& plane, double distance) {
	int base = 5345;
	double passengersNumber = normalSeats + buisnessSeats + firstClassSeats;
	double occupancy = passengersNumber / plane.maxPassengers;
	double cost = plane.normalSeats * 15 + plane.buisnessSeats * 24 + plane.firstClassSeats * 43 +
		plane.fuelConsumption / 1000 * distance * occupancy * 0.2 * plane.multiplier + plane.additionalCosts + base;
	return cost;

}





Airbus& Airbus::operator+=(int value)
{
	additionalCosts += value;
	return *this;
}

Boeing& Boeing::operator+=(double value)
{
	additionalCosts += value;
	return *this;
}
