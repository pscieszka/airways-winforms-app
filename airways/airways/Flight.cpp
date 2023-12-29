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
    vec.push_back(convertDate(date));
    vec.push_back(gate);
    vec.push_back(addTime(time,flightDuration));
    vec.push_back(convertTime(time));


    return vec;
}



std::string Flight::addTime(int timeInt, std::string timeStr)
{
    std::string ret;
    if (timeStr.find(':') != std::string::npos) {
        int hours = stoi(timeStr.substr(0, timeStr.find(':')));
        int minutes = stoi(timeStr.substr(timeStr.find(':') + 1));
        timeInt += hours * 60 + minutes;
        return convertTime(timeInt);
    }
    else {
        return "";
    }
}

std::string Flight::convertTime(int time)
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

std::string Flight::convertDate(std::string date)
{
    
    std::string day;
    std::string month;
    if (date.find('.') != std::string::npos) {
        day = date.substr(0, date.find('.'));
        month = date.substr(date.find('.')+1);
        if (day.size() == 1) {
            day = '0' + day;
        }
        if (month.size() == 1) {
            month = '0' + month;
        }
    }
    date = day + "." + month;
    return  date;
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
