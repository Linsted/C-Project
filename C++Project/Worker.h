#pragma once
#include <iostream>
using namespace std;

class Worker {
    string fullName;
    string position;
    int startYear;
    double salary;

public:
    void setFullName(string name);

    void setPosition(string pos);

    void setStartYear(int year);

    void setSalary(double sal);

    string getFullName();

    int getStartYear();
};
