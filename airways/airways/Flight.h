#pragma once
//#include"Passenger.h"
#include <msclr/marshal_cppstd.h>
#include "string"
#include "vector"
#include "Passenger.h"


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
    std::vector<Passenger> passengers;
public:
	Flight(std::string departure, std::string destination, int distance);
	Flight(std::string departure, std::string destination,int distance, int time, std::string date, std::string gate, std::string aircraft, std::string flightDuration);

	void edit(int time, std::string date, std::string gate);

	std::vector<std::string> getData();

	void addPassenger(Passenger& pass);
	std::vector<Passenger> getPassengers();

private:

	std::string addTime(int timeInt,std::string timeStr); // minutes + mm::hh, returns mm::hh
	std::string convertTime(int time);
	std::string convertDate(std::string date);

};
