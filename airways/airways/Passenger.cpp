#include "Passenger.h"
#include "Passenger.h"

//Passenger::Passenger(Baggage* bag, std::string name, int seatNumber) : name(name), ticketPrice(-1), seatNumber(seatNumber)
//{
	//calculateTicketPrice();
	//baggages.push_back(bag);
	//setBaggagesId();
//}

Passenger::Passenger(std::string name, std::string surname,std::string ticketType, Baggage* baggage,int ticketPrice) : name(name), surname(surname), ticketType(ticketType), baggage(baggage),ticketPrice(ticketPrice)
{
	calculateTicketPrice();
	setBaggagesId();
	bagType = baggage->getType();
}


Passenger::Passenger() : name("undefined"), ticketPrice(-1), seatNumber("")
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

	//result += "Seat number: " + std::to_string(seatNumber) + "\n";
	result += "\n";
	result += "Ticket price: " + std::to_string(ticketPrice) + "\n";


	return result;
}

std::vector<std::string> Passenger::getData()
{
	std::vector<std::string > vec;
	vec.push_back(name);
	vec.push_back(surname);
	vec.push_back("temp");
	vec.push_back(ticketType);
	vec.push_back(std::to_string(ticketPrice)+" EUR");
	vec.push_back(baggage->getType());
	vec.push_back(baggage->tag);

	return vec;
}

std::vector<std::string> Passenger::getDataRaw()
{
	std::vector<std::string > vec;
	vec.push_back(name);
	vec.push_back(surname);
	vec.push_back(ticketType);
	vec.push_back(std::to_string(ticketPrice));
	vec.push_back(bagType);
	vec.push_back(baggage->tag);

	return vec;
}


/*
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
*/

Passenger::~Passenger()
{
	//delete baggage;
}
void Passenger::setBaggagesId()
{
	baggagesId = "";
	int biggestId = 0;
	
	baggagesId += baggage->tag.substr(0, 2);

	if (std::stoi(baggage->tag.substr(2, 6)) > biggestId) {

		biggestId = std::stoi(baggage->tag.substr(2, 6));
	}
	
	for (int i = 0; i < 6 - std::to_string(biggestId).size(); i++) {
		baggagesId += "0";
	}
	baggagesId += std::to_string(biggestId);

}
void Passenger::calculateTicketPrice()
{
	
	ticketPrice += baggage->getPrice();
	if (ticketType[0] == 'E') {
		ticketPrice += 5;
	}
	else if(ticketType[0] == 'B') {
		ticketPrice += 35;
	}
	else {
		ticketPrice += 80;
	}

}