#include "Flight.h"


Flight::Flight(std::string departure, std::string destination, int distance) : departure(departure), destination(destination),distance(distance)
{
    gate = "N/A"; //not asigned yet
}

Flight::Flight(std::string departure, std::string destination, int distance, int time, std::string date, std::string gate, std::string aircraft, std::string flightDuration)
    : departure(departure), destination(destination), time(time), date(date), gate(gate),distance(distance),aircraft(aircraft), flightDuration(flightDuration)
{
}

void Flight::edit(int time, int date, int gate)
{
    this->time = time;
    this->date = date;
    this->gate = gate;
}

std::string Flight::convertTime()
{
    if (time < 60) {
        if (time >= 10) {
            return "00:" + std::to_string(time);
        }
        else {
            return "00:0" + std::to_string(time);
        }
    }

    std::string hours = std::to_string(time / 60);
    std::string minutes = std::to_string(time % 60);

    return  "";
}

void Flight::edit(int value, EditType editType)
{
    switch (editType) {
    case EDIT_TIME:
        time = value;
            break;
    case EDIT_DATE:
        date = value;
            break;
    case EDIT_GATE:
        gate = std::to_string(value);
        break;
    }
}
