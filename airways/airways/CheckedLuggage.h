#pragma once
#include "Baggage.h"
class CheckedLuggage : public Baggage
{
	int price;
	double dist;
public:
	CheckedLuggage(double weight, const std::vector<int>& size, double dist);
	CheckedLuggage();
	std::string display() const override;
	~CheckedLuggage();

private:
	void validCheck() override;
	void setTag() override;
	int calculatePrice();
};

