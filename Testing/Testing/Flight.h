#pragma once
#include"Passenger.h"
#include "vector"

enum EditType {
	EDIT_TIME,
	EDIT_DATE,
	EDIT_GATE
};

class Flight
{
	std::string destination;
	std::string departure;
	int time; //minutes
	int date; //days since 1 jan 2023
	int distance;
	std::string gate;
	std::vector<Passenger> passengers;
public:
	Flight(std::string departure, std::string destination, int time, int date);
	Flight(std::string departure, std::string destination, int time, int date,std::string gate);

	void edit(int value, EditType editType);

	void edit(int time, int date,int gate);
};

