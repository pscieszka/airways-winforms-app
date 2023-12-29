#include "MixedBaggage.h"

MixedBaggage::MixedBaggage(Baggage* bag1, Baggage* bag2) : baggages(2)
{
	//weight = bag1->getWeight() + bag2->getWeight();
}

MixedBaggage::MixedBaggage(Baggage* bag1, Baggage* bag2, Baggage* bag3) : baggages(3)
{
	//weight = bag1->getWeight() + bag2->getWeight() + bag3->getWeight();
}
