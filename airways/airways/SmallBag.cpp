#include "SmallBag.h"

SmallBag::SmallBag(double weight, const std::vector<int>& size, bool backpack) : Baggage(weight, size), backpack(backpack)
{
	
	setTag();
	validCheck();
}

SmallBag::SmallBag() : Baggage(), backpack(false)
{
	setTag();
}

std::string SmallBag::display() const
{
	std::string result;

	result += "Small bag\n";
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

std::string SmallBag::getType() const
{
	return "Small Bag";
}

int SmallBag::getPrice() const
{
	return 0;
}

void SmallBag::validCheck()
{
	if ((size[0] > 40 || size[1] > 20 || size[2] > 25)) {
		isValid = false;
	}
	else {
		isValid = true;
	}

}

void SmallBag::setTag() {

	tag = "SB" + objsNumToString();
}
