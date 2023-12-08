
#include <iostream>
#include "Baggage.h"
#include "SmallBag.h"

int main()
{
	Baggage* bag = new SmallBag(20, { 10,10,10 }, true);
	Baggage * bag2 = new SmallBag(20, { 10,10,10 }, true);
	bag->display();
	delete bag;
	Baggage* bag3 = new SmallBag(20, { 10,10,10 }, true);
	bag2->display();
	bag3->display();

	
}    



