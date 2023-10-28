#include "Worker.h"
#include <iostream>
using namespace std;

void Worker::setFullName(string fullName) {
    this->fullName = fullName;
}

void Worker::setPosition(string position) {
    this->position = position;
}

void Worker::setStartYear(int startYear) {
    this->startYear = startYear;
}

void Worker::setSalary(double salary) {
    this->salary = salary;
}

string Worker::getFullName() {
    return fullName;
}

int Worker::getStartYear() {
    return startYear;
}

Worker::Worker() {
    this->fullName = " ";
    this->position = " ";
    this->startYear = 0;
    this->salary = 0.0;
}

Worker::Worker(string fullName, string position, int startYear, double salary) {
    this->fullName = fullName;
    this->position = position;
    this->startYear = startYear;
    this->salary = salary;
}

Worker::~Worker() {}