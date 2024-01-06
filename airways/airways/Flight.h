#pragma once
#include <msclr/marshal_cppstd.h>
#include "string"
#include "vector"
#include "Passenger.h"

	/**
* @brief Klasa przechowuje dane lotu, miasto odlotu i przyloty, rodzaj samolotu,
* godzine, date, dystans, gate, czas lotu oraz wektor pasazerow.
*/
class Flight
{
	std::string destination;
	std::string departure;
	std::string aircraft;
	int time; //minutes
	std::string date; 
	int distance;
	std::string flightDuration;
	std::string gate;
    std::vector<Passenger> passengers;
public:
	Flight() = default;
	Flight(std::string departure, std::string destination, int distance);

	Flight(std::string departure, std::string destination,int distance, int time, std::string date, std::string gate, std::string aircraft, std::string flightDuration);

	void edit(int time, std::string date, std::string gate);
	/**
* @brief Dostep do wszystkich danych lotu.
*/
	std::vector<std::string> getData();
	/**
* @brief Dostep do wszystkich danych lotu, zmodyfikowany do latwiejszego zapisu do pliku binarnego
*/
	std::vector<std::string> getDataRaw();
	/**
* @brief Zwraca cene lotu na podstawie dystansu.
*/
	int getPrice();
	/**
* @brief Dodaje nowego pasezera do wektora.
*/
	void addPassenger(const Passenger pass);
	/**
* @brief Zwraca wektor pasazerow.
*/
	std::vector<Passenger>& getPassengers();
	~Flight();
private:
	/**
* @brief Funkcja do dodawnia czasu miedzy 2 roznymi formatmi.
* @param timeInt - ilosc minut
* @param timeStr - czas w formacie mm::hh
*/
	std::string addTime(int timeInt,std::string timeStr); 
	/**
* @brief Funkcja zamienia czas z formatu minut do mm::hh.
* @param time - ilosc minut
*/
	std::string convertTime(int time);
	/**
* @brief Funkcja poprawia format daty np. 1.1 -> 01.01
* @param date - data w formacie dzien.miesiac
*/
	std::string convertDate(std::string date);

};
