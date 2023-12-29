#pragma once
#include "Baggage.h"
class MixedBaggage : public Baggage
{
	// 2-3
	int baggages;
public:
	MixedBaggage(Baggage* bag1, Baggage* bag2);
	MixedBaggage(Baggage* bag1, Baggage* bag2, Baggage* bag3);

};

