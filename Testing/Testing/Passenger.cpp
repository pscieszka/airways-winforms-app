#include "Passenger.h"

Passenger::Passenger(Baggage* bag, std::string name, int seatNumber) : bag(bag), name(name), ticketPrice(-1),seatNumber(seatNumber)
{
	calculateTicketPrice();
}

Passenger::Passenger() : bag(nullptr), name("undefined"), ticketPrice(-1), seatNumber(-1)
{
}

void Passenger::addToTicketPrice(int val)
{
	ticketPrice += val;
}

std::string Passenger::display() const
{
	std::string result;

	result += "Passenger\n";
	result += "Name: " + name + "\n";
	result += "Bag: " + bag->getType() + "\n";
	
	result += "Seat number: " + std::to_string(seatNumber) + "\n";
	result += "\n";
	result += "Ticket price: " + std::to_string(ticketPrice) + "\n";
	

	return result;
}

Passenger::~Passenger()
{
	delete bag;
}

void Passenger::calculateTicketPrice()
{
	ticketPrice = bag->getPrice();

}
