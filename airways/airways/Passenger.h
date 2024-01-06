#include "Baggage.h"
#include "string"
/**
 * @brief Klasa reprezentujaca pasazera
 *
 * Klasa przechowuje  imiê, nazwisko, typ biletu, cene biletu, typ bagazu.
 * 
 * 
 */
class Passenger
{
	
	std::string baggagesId;
	std::string name;
	std::string surname;
	std::string ticketType;
	int ticketPrice;
	
	std::string bagType;
	
public:
	Passenger(std::string name, std::string surname, std::string ticketType, Baggage* baggage,int ticketPrice);
	Passenger();
	void addToTicketPrice(int flightPrice);
	std::string display() const;

	std::vector<std::string> getData();
	std::vector<std::string> getDataRaw();
	Baggage* getBaggage() const { return baggage; }

	~Passenger();
private:
	void calculateTicketPrice();
	void setBaggagesId();

public:
	Baggage* baggage;
};

