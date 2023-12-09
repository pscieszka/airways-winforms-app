
#include <iostream>
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
#include "CheckedLuggage.h"
#include "Passenger.h"

int main()
{
	Baggage* bag = new SmallBag(20, { 10,10,10 }, true);
	
	bag = new HandLuggage(10, { 23,23,23 });
	std::cout<<bag->display();
	Passenger* pas = new Passenger(bag, "jan kowalski", 23);
	std::cout << "\n\n\n" <<pas->display();
	
}    



