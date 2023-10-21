#pragma once
#include <iostream>
using namespace std;

class Abiturient {
	string surname;
    string firstName;
    string middleName;
    string address;
    int marks[5];

public:
    void setSurname(string sName);
    void setFirstName(string fName);
    void setMiddleName(string mName);
    void setAddress(string addr);
    void setMarks(int m1, int m2, int m3, int m4, int m5);
    int* getMarks();
    void checkExclusion();

    Abiturient();
    Abiturient(string sName, string fName, string mName, string addr, int m1, int m2, int m3, int m4, int m5);

};

