#include "Passenger.h"



Passenger::Passenger(std::string name, std::string surname,std::string ticketType, Baggage* baggage,int ticketPrice,bool flagTicketPrice) 
	: name(name), surname(surname), ticketType(ticketType), baggage(baggage), ticketPrice(ticketPrice), flagTicketPrice(flagTicketPrice)
{
}

Passenger::Passenger(const Passenger& other)
	: baggagesId(other.baggagesId),
	name(other.name),
	surname(other.surname),
	ticketType(other.ticketType),
	ticketPrice(other.ticketPrice),
	bagType(other.bagType),
	flagTicketPrice(true) {

	if (other.baggage) {
		baggage = other.baggage->clone();
		bagType = baggage->getType();
		calculateTicketPrice();
	}
	else {
		baggage = nullptr;
	}
}


Passenger::Passenger() : name("undefined"), ticketPrice(-1)
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
	vec.push_back(bagType);
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

void Passenger::setBaggage(double weight, std::vector<int> sizes)
{
	baggage = new HandLuggage(weight, sizes);
	calculateTicketPrice();
	setBaggagesId();
	bagType = baggage->getType();
}

void Passenger::setBaggage(double weight, std::vector<int> sizes, bool backpack)
{
	baggage = new SmallBag(weight, sizes, backpack);
	calculateTicketPrice();
	setBaggagesId();
	bagType = baggage->getType();
}

void Passenger::setBaggage(double weight, std::vector<int> sizes, double distance)
{
	baggage = new CheckedLuggage(weight, sizes, distance);
	calculateTicketPrice();
	setBaggagesId();
	bagType = baggage->getType();
}

Passenger& Passenger::operator=(const Passenger& other)
{
	if (this != &other) {
		delete baggage;

		baggagesId = other.baggagesId;
		name = other.name;
		surname = other.surname;
		ticketType = other.ticketType;
		ticketPrice = other.ticketPrice;
		bagType = other.bagType;
		flagTicketPrice = true;

		if (other.baggage) {
			baggage = other.baggage->clone();
			bagType = baggage->getType();
			calculateTicketPrice();

		}
		else {
			baggage = nullptr;
		}
	}
	return *this;
}

Passenger::~Passenger()
{
	if (baggage != nullptr) {
		delete baggage;
		baggage = nullptr;
	}
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
	if(!flagTicketPrice){
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
		flagTicketPrice = 1;
	}

}