#pragma once
#include "Flight.h"
#include "vector"

class flightsList
{
	Flight ff;

public:
	void add(Flight f) {
		ff = f;

	}
	std::string get() {
		return ff.test();
	}
};

