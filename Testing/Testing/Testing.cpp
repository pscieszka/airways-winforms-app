
#include <iostream>
#include "Baggage.h"
#include "SmallBag.h"

int main()
{
	Baggage* bag = new SmallBag(20, { 10,10,10 }, true);
	bag->display();
	delete bag;
}    



