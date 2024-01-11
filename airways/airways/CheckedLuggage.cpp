
#include "CheckedLuggage.h"

CheckedLuggage::CheckedLuggage(double weight, const std::vector<int>& size, double dist) : Baggage(weight, size), dist(dist)
{

	setTag();
	validCheck();
	price = calculatePrice();
}

CheckedLuggage::CheckedLuggage() : Baggage(), dist(0), price(-1)
{
	setTag();
}

std::string CheckedLuggage::display() const
{
	std::string result;

	result += "Hand luggage\n";
	result += "Weight: " + std::to_string(weight) + "\n";
	result += "Size: ";
	for (int i = 0; i < 3; i++) {
		result += std::to_string(size[i]) + " ";
	}
	result += "Price: " + std::to_string(price) + "\n";
	result += "\n";
	result += "Tag: " + tag + "\n";
	result += "Valid: " + std::to_string(isValid) + "\n";

	return result;
}

std::string CheckedLuggage::getType() const
{
	if (isValid) {
		return "Checked Luggage";
	}
	else {
		return "Checked Luggage";
	}
}


int CheckedLuggage::getPrice() const
{
	return price;
}



CheckedLuggage::~CheckedLuggage()
{

}

void CheckedLuggage::validCheck()
{
	if (weight > 20.0) {
		isValid = false;
	}
	else {
		isValid = true;
	}
}

void CheckedLuggage::setTag()
{
	tag = "CL" + objsNumToString();
}

int CheckedLuggage::calculatePrice()
{
	return static_cast<int>(weight*3+15 + 4 * sqrt(dist));
}
