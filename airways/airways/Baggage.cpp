#include "Baggage.h"

int Baggage::objsNumber = 0;

Baggage::Baggage(double weight, const std::vector<int>& size) : weight(weight), size(size), isValid(false) {
	objsNumber++;
}
Baggage::Baggage() : weight(0.0), size({ 0,0,0 }), tag("undefined"), isValid(false) {}


void Baggage::setWeight(double newWeight) {
	weight = newWeight;
}

void Baggage::setSize(const std::vector<int>& newSize) {
	size = newSize;
}

void Baggage::clearObjs()
{
	objsNumber = 0;
}

std::vector<double> Baggage::getData()
{
	std::vector<double> res;
	for (auto s : size) {
		res.push_back(static_cast<double> (s));
	}
	res.push_back(weight);
	return res;

}

std::string Baggage::objsNumToString() {
	std::string id = std::to_string(Baggage::objsNumber);
	while (id.size() != 6) {
		id.insert(0, "0");
	}
	return id;
}

Baggage::~Baggage() {
	//colisions
	//objsNumber--;
	//std::cout << "Dest baggage";

}

std::string Baggage::display() const
{
	return std::string();
}

