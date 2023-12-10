#pragma once
#include "Baggage.h"

class SmallBag : public Baggage
{
	bool backpack;
public:
	SmallBag(double weight, const std::vector<int>& size, bool backpack);
	SmallBag();
	std::string display() const override;
	std::string getType() const override;
	int getPrice() const override;
	~SmallBag();

private:
	void validCheck() override;
	void setTag() override;
};

