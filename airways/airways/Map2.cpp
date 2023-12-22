#include "Map2.h"

std::string airways::Map2::calculateTime(int dist)
{
	double time = 0.551104 * pow((dist / 100), 0.608872) - 0.257423;
	int h = static_cast<int>(time);
	int m = static_cast<int>((time - h) * 60);
	std::string hours;
	std::string minutes;

	if (h < 10) {
		hours = "0" + std::to_string(h);
	}
	else {
		hours =  std::to_string(h);
	}

	if (m < 10) {
		minutes = "0" + std::to_string(m);
	}
	else {
		minutes = std::to_string(m);
	}


	return hours+":"+minutes;
}

