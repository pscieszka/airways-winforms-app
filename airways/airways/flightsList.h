#pragma once
#include "Flight.h"
#include "vector"

class flightsList
{
	std::vector<Flight> flights;
	std::string test;
public:
	void add(Flight f,std::string s) {
		flights.push_back(f);
		test = s;
	}
	std::string get() {
		return test;
	}
};

