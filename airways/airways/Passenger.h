#pragma once
#include "Baggage.h"
#include "string"

class Passenger
{
	//std::vector<Baggage*> baggages;
	
	std::string baggagesId;
	std::string name;
	std::string surname;
	std::string ticketType;
	int ticketPrice;
	std::string seatNumber;
	
public:
	Passenger(std::string name, std::string surname, std::string ticketType, Baggage* baggage,int ticketPrice);
	//Passenger(std::vector<Baggage*> bags, std::string name, int seatNumber);
	Passenger();
	void addToTicketPrice(int flightPrice);
	std::string display() const;

	std::vector<std::string> getData();
	~Passenger();
private:
	void calculateTicketPrice();
	void setBaggagesId();
public:
	Baggage* baggage;
};

