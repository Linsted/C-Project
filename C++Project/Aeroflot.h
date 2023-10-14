#pragma once
#include <iostream>
using namespace std;

class Aeroflot
{
    string destination;
    string flightNumber;
    string aircraftType;
    string departureTime;
    string daysOfWeek;

public:
    
    void setDestination(string dest); 

    void setFlightNumber(string number);

    void setAircraftType(string type);

    void setDepartureTime(string time);

    void setDaysOfWeek(string days);

     
    string getFlightNumber();

    string getDepartureTime();

};

