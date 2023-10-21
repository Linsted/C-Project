#include "Worker.h"
#include <iostream>
using namespace std;

void Worker::setFullName(string name) {
    fullName = name;
}

void Worker::setPosition(string pos) {
    position = pos;
}

void Worker::setStartYear(int year) {
    startYear = year;
}

void Worker::setSalary(double sal) {
    salary = sal;
}

string Worker::getFullName() {
    return fullName;
}

int Worker::getStartYear() {
    return startYear;
}

Worker::Worker() {
    fullName = " ";
    position = " ";
    startYear = 0;
    salary = 0.0;
}

Worker::Worker(string name, string pos, int year, double sal) {
    fullName = name;
    position = pos;
    startYear = year;
    salary = sal;
}