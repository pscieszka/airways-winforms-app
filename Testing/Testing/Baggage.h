#pragma once
#include <iostream>
#include <string>
#include <vector>
class Baggage
{
protected:
	static int objsNumber;
	double weight;
	std::vector<int> size;
	std::string tag;
	bool isValid;

public:
	Baggage(double weight, const std::vector<int>& size);
	Baggage();

	virtual void setWeight(double newWeight);
	virtual void setSize(const std::vector<int>& newSize);
	virtual std::string getType() const = 0;
	virtual void validCheck() = 0;
	virtual int getPrice() const = 0;
	virtual double getWeight() const;
	virtual std::string display() const = 0;




	virtual ~Baggage();
	
protected:
	virtual std::string objsNumToString();
private:
	virtual void setTag() = 0;

};

