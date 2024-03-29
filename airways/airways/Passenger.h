#include "Baggage.h"
#include "SmallBag.h"
#include "CheckedLuggage.h"
#include "HandLuggage.h"
#include "string"
/**
 * @brief Klasa reprezentujaca pasazera
 * Klasa przechowuje  imi�, nazwisko, typ biletu, cene biletu, typ bagazu.
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
/**
 * @brief Konstruktor klasy Passenger.
 * @param name - imie pasazera.
 * @param surname - nazwisko pasazera.
 * @param ticketType - typ biletu.
 * @param baggage - wskaznik na bagaz.
 * @param ticketPrice - cena biletu, pobierana z obiektu baggage.
 */
	Passenger(std::string name, std::string surname, std::string ticketType, Baggage* baggage,int ticketPrice,bool flagTicketPrice);
	/**
* @brief Konstruktor kopiujacy
*/
	Passenger(const Passenger& other);
	Passenger();
/**
 * @brief Funkcja dodajaca kwote flightPrice do ceny biletu.
 * @param flightPrice - kwota do dodania.
 */
	void addToTicketPrice(int flightPrice);
	std::string display() const;
	/**
 * @brief Dostep do wszystkich potrzebnych danych pasezera do dzialania aplikacji. 
 */
	std::vector<std::string> getData();
/**
 * @brief Dostep do wszytkich danych pasazera zmodyfikowanych w taki sposob zeby byly latwiejsze do zapisu w pliku binarnym
 */
	std::vector<std::string> getDataRaw();
/**
* @brief Dostep do obiektu baggagze. 
*/
	Baggage* getBaggage() const { return baggage; }
	/**
* @brief Ustawienie bagazu jako HandLuggage.
*/
	void setBaggage(double weight, std::vector<int>sizes);
	/**
* @brief Ustawienie bagazu jako SmallBag.
*/
	void setBaggage(double weight, std::vector<int>sizes, bool backpack);
	/**
* @brief Ustawienie bagazu jako CheckedLuggage.
*/
	void setBaggage(double weight, std::vector<int>sizes, double distance);
	/**
* @brief Przeciazenie operatora = sluzy do poprawnego tworzenia kopii obietku.
*/
	Passenger& operator=(const Passenger& other);
	/**
* @brief Des
*/
	~Passenger();
private:
/**
* @brief Dodanie wartosci do ceny biletu na podstawie typu biletu.
*/
	void calculateTicketPrice();
/**
* @brief Stworzenie id bagazu.
*/
	void setBaggagesId();

private:
	Baggage* baggage;
	bool flagTicketPrice=0;
};

