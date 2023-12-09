#pragma once
#include "Baggage.h"
class Passenger
{
	Baggage* bag;
	std::string name;
	int ticketPrice;
	int seatNumber;
public:
	Passenger(Baggage* bag, std::string name, int seatNumber);
	Passenger();
	void addToTicketPrice(int val);
	std::string display() const;
	~Passenger();
private:
	void calculateTicketPrice();
};

