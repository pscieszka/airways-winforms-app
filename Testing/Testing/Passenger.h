#pragma once
#include "Baggage.h"
#include "string"
class Passenger
{
	std::vector<Baggage*> baggages;
	std::string baggagesId;
	std::string name;
	int ticketPrice;
	int seatNumber;
public:
	Passenger(Baggage* bag, std::string name, int seatNumber);
	Passenger(std::vector<Baggage*> bags, std::string name, int seatNumber);
	Passenger();
	void addToTicketPrice(int flightPrice);
	std::string display() const;
	~Passenger();
private:
	void calculateTicketPrice();
	void setBaggagesId();
};

