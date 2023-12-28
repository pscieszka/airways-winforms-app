#pragma once
//#include"Passenger.h"
#include <msclr/marshal_cppstd.h>
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

	std::vector<std::string> getData();

private:

	std::string addTime(int timeInt,std::string timeStr); // minutes + mm::hh, returns mm::hh
	std::string convertTime(int time);
	std::string convertDate();

};
