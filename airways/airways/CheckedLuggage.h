#pragma once
#include "Baggage.h"

/**
 * @brief Klasa jest obiektem bagazu rejestrowanego.
 */
class CheckedLuggage : public Baggage
{
    int price;
    double dist;

public:

    /**
     * @brief Konstruktor klasy CheckedLuggage
     * @param weight - Waga torby.
     * @param size - Wektor zawieraj¹cy wymiary torby XYZ.
     * @param dist - dystans lotu, potrzebny do policzenia ceny baga¿u.
     */
    CheckedLuggage(double weight, const std::vector<int>& size, double dist);

    /**
     * @brief Domyœlny konstruktor klasy CheckedLuggage.
     */
    CheckedLuggage();
    virtual CheckedLuggage* clone() const override {
        return new CheckedLuggage(*this);
    }

    std::string display() const override;

    /**
     * @brief Funkcja zwracaj¹ca typ baga¿u.
     * @return Typ baga¿u jako string.
     */
    std::string getType() const override;

    /**
     * @brief Funkcja zwracaj¹ca cenê baga¿u.
     * @return Cena baga¿u jako int.
     */
    int getPrice() const override;

private:
    void validCheck() override;

    /**
     * @brief Funkcja ustawia tag torby, ka¿dy tag jest unikatowy i zale¿y
     * od iloœci istniej¹cych obiektów baggage.
     */
    void setTag() override;

    /**
     * @brief Funkcja przelicza cenê baga¿u na podstawie dystansu i wagi.
     * @return cena bagazu
     */
    int calculatePrice();
};
