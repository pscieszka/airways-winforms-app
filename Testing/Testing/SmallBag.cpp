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

void SmallBag::display() const
{
	std::cout << "Small bag" << std::endl;
	std::cout << "Weight:" <<weight <<std::endl;
	std::cout << "Size:";
	for (int i = 0; i < 3; i++) {
		std::cout << size[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Tag:" << tag << std::endl;
	std::cout << "Valid:" <<isValid<< std::endl;
}

SmallBag::~SmallBag()

{
	std::cout << "dest smallbag";
}

void SmallBag::validCheck()
{
	if ((size[0] > 40 || size[1] > 20 || size[2] > 25) || backpack==false) {
		isValid = false;
	}
	else {
		isValid = true;
	}

}

void SmallBag::setTag() {

	tag = "SB" + objsNumToString();
}
