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

std::vector<std::string> Flight::getData()
{
    std::vector<std::string>  vec;
    vec.push_back(departure);
    vec.push_back(destination);
    vec.push_back(aircraft);
    vec.push_back(std::to_string(distance));
    vec.push_back(date);

    return vec;
}

std::string Flight::convertTime()
{
    std::string ret="";
 
    std::string hours = std::to_string(time / 60);
    std::string minutes = std::to_string(time % 60);

    if (stoi(hours) < 10) {
        ret += "0" + hours;
    }
    else {
        ret += hours;
    }

    if (stoi(minutes) < 10) {
        ret += ":0" + minutes;
    }
    else {
        ret += ":" + minutes;
    }
    
    return  ret;
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
