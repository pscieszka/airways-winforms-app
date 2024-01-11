#include "Baggage.h"
/**
 * @brief Klasa przechowuje obiekt malego bagazu.
 * 
*/
class SmallBag : public Baggage
{
	bool backpack;
public:
	/**
	 * @brief Konstruktor klasy SmallBag.
	 * @param weight - Waga torby.
	 * @param size - Wektor zawierajacy wymairy torby XYZ.
	 * @param backpack - okresla czy torba jest pleckaiem.
	 */
	SmallBag(double weight, const std::vector<int>& size, bool backpack);
	SmallBag();

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
	~SmallBag();

private:

	void validCheck() override;
	/**
	* @brief Funkcja ustawia tag torby, kazdy tag jest unikatowy i jest zalezy
	* od ilosci istniejacych obiektow baggage.
	* 
	*/
	void setTag() override;
};

