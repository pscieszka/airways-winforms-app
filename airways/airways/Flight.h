#pragma once
//#include"Passenger.h"
#include "string"
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
	std::string aircraft;
	int time; //minutes
	int date; //days since 1 jan 2023
	int distance;
	std::string flightDuration;
	std::string gate;
	//std::vector<Passenger> passengers;
public:
	Flight(std::string departure, std::string destination, int distance);
	Flight(std::string departure, std::string destination,int distance, int time, int date, std::string gate, std::string aircraft, std::string flightDuration);

	void edit(int value, EditType editType);

	void edit(int time, int date, int gate);
	std::string test() {
		return aircraft + " " + gate;
	}
	std::vector<std::string> getData;

private:
	std::string convertTime();
	std::string convertDate();

};
