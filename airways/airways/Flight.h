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
	std::string date; 
	int distance;
	std::string flightDuration;
	std::string gate;
	//std::vector<Passenger> passengers;
public:
	Flight(std::string departure, std::string destination, int distance);
	Flight(std::string departure, std::string destination,int distance, int time, std::string date, std::string gate, std::string aircraft, std::string flightDuration);

	void edit(int value, EditType editType);

	void edit(int time, int date, int gate);
	std::string test() {
		
		std::string str;
		str += "Destination = " + destination + "\n";
		str += "Departure = " + departure + "\n";
		str += "Aircraft = " + aircraft + "\n";
		str += "time = " +std::to_string(time) + "\n";
		return str;
	}
	std::vector<std::string> getData;

private:
	std::string convertTime();
	std::string convertDate();

};
