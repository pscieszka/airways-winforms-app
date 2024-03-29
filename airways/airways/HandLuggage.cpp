#include "HandLuggage.h"

HandLuggage::HandLuggage(double weight, const std::vector<int>& size) : Baggage(weight, size)
{
	setTag();
	validCheck();
}

HandLuggage::HandLuggage() : Baggage()
{
	setTag();
}

HandLuggage* HandLuggage::clone() const
{
	return new HandLuggage(*this);
}

std::string HandLuggage::display() const
{
	std::string result;

	result += "Hand luggage\n";
	result += "Weight: " + std::to_string(weight) + "\n";
	result += "Size: ";
	for (int i = 0; i < 3; i++) {
		result += std::to_string(size[i]) + " ";
	}
	result += "\n";
	result += "Tag: " + tag + "\n";
	result += "Valid: " + std::to_string(isValid) + "\n";

	return result;
}

std::string HandLuggage::getType() const
{

	return "Hand Luggage";
}

int HandLuggage::getPrice() const
{
	return 75;
}


void HandLuggage::validCheck()
{
	if ((size[0] > 55.0 || size[1] > 40.0 || size[2] > 20.0) || weight > 10.0) {
		isValid = false;
	}
	else {
		isValid = true;
	}
}

void HandLuggage::setTag()
{
	tag = "HL" + objsNumToString();
}
