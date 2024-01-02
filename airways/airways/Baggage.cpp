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

