#pragma once
#include "Baggage.h"
/**
 * @brief Klasa przechowuje obiekt bagazu podrecznego.
*/
class HandLuggage : public Baggage
{
public:
	/**
 * @brief Konstruktor klasy SmallBag.
 * @param weight - Waga torby.
 * @param size - Wektor zawierajacy wymairy torby XYZ.
 */
	HandLuggage(double weight, const std::vector<int>& size);
	HandLuggage();
	HandLuggage* clone() const override {
		return new HandLuggage(*this);
	}
	std::string display() const override;
	/**
   * @brief Funkcja zwracaja typ bagazu.
   * @return Typ bagazu jako string.
   */
	std::string getType() const override;

	/**
   * @brief Funkcja zwracaja cene bagazu.
   * @return Cena bagazu jako int.
   */
	int getPrice() const override;

private:
	void validCheck() override;
	/**
* @brief Funkcja ustawia tag torby, kazdy tag jest unikatowy i jest zalezy
* od ilosci istniejacych obiektow baggage.
*
*/
	void setTag() override;
};

