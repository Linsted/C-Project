#include "Aeroflot.h"
#include <iostream>
using namespace std;

void Aeroflot::setDestination(string dest) {
    destination = dest;
}

void Aeroflot::setFlightNumber(string number) {
    flightNumber = number;
}

void Aeroflot::setAircraftType(string type) {
    aircraftType = type;
}

void Aeroflot::setDepartureTime(string time) {
    departureTime = time;
}

void Aeroflot::setDaysOfWeek(string days) {
    daysOfWeek = days;
}


string Aeroflot::getFlightNumber() {
    return flightNumber;
}

string Aeroflot::getDepartureTime() {
    return departureTime;
}

Aeroflot::Aeroflot() {
    destination = " ";
    flightNumber = " ";
    aircraftType = " ";
    departureTime = " ";
    daysOfWeek = " ";
}

Aeroflot::Aeroflot(string dest, string number, string type, string time, string days) {
    destination = dest;
    flightNumber = number;
    aircraftType = type;
    departureTime = time;
    daysOfWeek = days;
}