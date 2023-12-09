#pragma once
#include "Baggage.h"
class HandLuggage : public Baggage
{
public:
	HandLuggage(double weight, const std::vector<int>& size);
	HandLuggage();
	std::string display() const override;
	std::string getType() const override;
	int getPrice() override;
	~HandLuggage();

private:
	void validCheck() override;
	void setTag() override;
};

