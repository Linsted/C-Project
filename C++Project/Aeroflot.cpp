#include "Aeroflot.h"
#include <iostream>
using namespace std;

void Aeroflot::setDestination(string destination) {
    this->destination = destination;
}

void Aeroflot::setFlightNumber(string flightNumber) {
    this->flightNumber = flightNumber;
}

void Aeroflot::setAircraftType(string aircraftType) {
    this->aircraftType = aircraftType;
}

void Aeroflot::setDepartureTime(string departureTime) {
    this->departureTime = departureTime;
}

void Aeroflot::setDaysOfWeek(string daysOfWeek) {
    this->daysOfWeek = daysOfWeek;
}


string Aeroflot::getFlightNumber() {
    return flightNumber;
}

string Aeroflot::getDepartureTime() {
    return departureTime;
}

Aeroflot::Aeroflot() {
    this->destination = " ";
    this->flightNumber = " ";
    this->aircraftType = " ";
    this->departureTime = " ";
    this->daysOfWeek = " ";
}

Aeroflot::Aeroflot(string destination, string flightNumber, string aircraftType, string departureTime, string daysOfWeek) {
    this->destination = destination;
    this->flightNumber = flightNumber;
    this->aircraftType = aircraftType;
    this->departureTime = departureTime;
    this->daysOfWeek = daysOfWeek;
}

Aeroflot::~Aeroflot() {}