#pragma once
#include <iostream>
using namespace std;

class Abiturient {
    string surname;
    string firstName;
    string middleName;
    string address;
    int* marks;
    int numMarks;
    double averageMark;

public:
    Abiturient();
    Abiturient(string sName, string fName, string mName, string addr, int num);
    Abiturient(const Abiturient& other);
    ~Abiturient();

    void setSurname(string sName);
    void setFirstName(string fName);
    void setMiddleName(string mName);
    void setAddress(string addr);
    void setMarks(int num);
    int* getMarks();
    double getAverageMark() const;
    void checkExclusion() const;
    void displayInfo() const; 


    void printObjectAddress() const;
    void printArrayAddress() const;
};
