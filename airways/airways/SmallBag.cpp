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
	std::cout << "Small bag" << std::endl;
	std::cout << "Weight:" << weight << std::endl;
	std::cout << "Size:";
	for (int i = 0; i < 3; i++) {
		std::cout << size[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Tag:" << tag << std::endl;
	std::cout << "Valid:" << isValid << std::endl;
	return "change it to string return to do";
}

std::string SmallBag::getType() const
{
	if (backpack) {
		return "Small Bag";
	}
	else {
		return "Small Bag";
	}
}

int SmallBag::getPrice() const
{
	return 0;
}


SmallBag::~SmallBag()

{
	std::cout << "dest smallbag";
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
