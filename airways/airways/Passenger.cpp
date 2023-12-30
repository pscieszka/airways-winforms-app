#include "Passenger.h"
#include "Passenger.h"

//Passenger::Passenger(Baggage* bag, std::string name, int seatNumber) : name(name), ticketPrice(-1), seatNumber(seatNumber)
//{
	//calculateTicketPrice();
	//baggages.push_back(bag);
	//setBaggagesId();
//}

Passenger::Passenger(std::string name, std::string surname,std::string ticketType) : name(name), surname(surname), ticketType(ticketType)
{
	calculateTicketPrice();
	//setBaggagesId();
}


Passenger::Passenger() : name("undefined"), ticketPrice(-1), seatNumber(-1)
{
}

void Passenger::addToTicketPrice(int flightPrice)
{
	ticketPrice += flightPrice;
}

std::string Passenger::display() const
{
	std::string result;

	result += "Passenger\n";
	result += "Name: " + name + "\n";
	result += "Bag: " + baggagesId + "\n";

	result += "Seat number: " + std::to_string(seatNumber) + "\n";
	result += "\n";
	result += "Ticket price: " + std::to_string(ticketPrice) + "\n";


	return result;
}

std::vector<std::string> Passenger::getData()
{
	std::vector<std::string > vec;
	vec.push_back("22");
	vec.push_back("33");
	return vec;
}

Passenger::~Passenger()
{
	for (auto& ptr : baggages) {
		delete ptr;
	}
}

void Passenger::calculateTicketPrice()
{
	ticketPrice = 0;
	for (auto& ptr : baggages) {
		ticketPrice += ptr->getPrice();
	}

}

void Passenger::setBaggagesId()
{
	baggagesId = "";
	int biggestId = 0;
	for (auto& ptr : baggages) {
		baggagesId += ptr->tag.substr(0, 2);

		if (stoi(ptr->tag.substr(2, 6)) > biggestId) {

			biggestId = stoi(ptr->tag.substr(2, 6));
		}
	}
	for (int i = 0; i < 6 - std::to_string(biggestId).size(); i++) {
		baggagesId += "0";
	}
	baggagesId += std::to_string(biggestId);

}
