
#include <iostream>
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
#include "CheckedLuggage.h"
#include "Passenger.h"

int main()
{
	Baggage* bag = new SmallBag(20, { 10,10,10 }, true);
	
	Baggage* bag2 = new HandLuggage(10, { 23,23,23 });
	
	std::cout<<bag->display();
	Passenger* pas = new Passenger({bag,bag2}, "jan kowalski", 23);
	std::cout << "\n\n\n" <<pas->display();
	
}    



