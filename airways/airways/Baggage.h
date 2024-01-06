#pragma once
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief Klasa baggage jest w pe³ni wirtualna i mo¿e przyjmowaæ postaæ ró¿nych typów baga¿u.
 */
class Baggage
{
protected:
    static int objsNumber;
    double weight;
    std::vector<int> size;
    bool isValid;

public:
    std::string tag;

    /**
     * @brief Konstruktor klasy, czêœæ wspólna wszystkich typów baga¿u.
     * Konstruktor tak¿e odpowiada za zliczanie wszystkich instancji tej klasy,
     * jest to potrzebne do ustawiania tagów baga¿u.
     * @param weight - Waga torby.
     * @param size - Wektor zawieraj¹cy wymiary torby XYZ.
     */
    Baggage(double weight, const std::vector<int>& size);
    Baggage();

    virtual void setWeight(double newWeight);
    virtual void setSize(const std::vector<int>& newSize);
    virtual std::string getType() const = 0;
    virtual void validCheck() = 0;
    virtual int getPrice() const = 0;
    virtual std::string display() const = 0;

    virtual ~Baggage();

protected:
    virtual std::string objsNumToString();

private:
    virtual void setTag() = 0;
};
