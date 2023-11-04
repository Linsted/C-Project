#include "Abiturient.h"
#include <iostream>
using namespace std;

Abiturient::Abiturient() : surname(" "), firstName(" "), middleName(" "), address(" "), marks(nullptr), numMarks(0), averageMark(0.0) {
    cout << "Abiturient object created at address: " << this << endl;
    printArrayAddress();
}

Abiturient::Abiturient(string sName, string fName, string mName, string addr, int num) : surname(sName), firstName(fName), middleName(mName), address(addr), numMarks(num), averageMark(0.0) {
    marks = new int[numMarks];
    for (int i = 0; i < numMarks; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
        averageMark += marks[i];
    }
    if (numMarks > 0) {
        averageMark /= numMarks;
    }
    cout << "Abiturient object created at address: " << this << endl;
    printArrayAddress();
}

Abiturient::Abiturient(const Abiturient& other) : surname(other.surname), firstName(other.firstName), middleName(other.middleName), address(other.address), numMarks(other.numMarks), averageMark(0.0) {
    if (other.marks != nullptr) {
        marks = new int[numMarks];
        for (int i = 0; i < numMarks; i++) {
            marks[i] = other.marks[i];
            averageMark += marks[i];
        }
        if (numMarks > 0) {
            averageMark /= numMarks;
        }
    }
    else {
        marks = nullptr;
    }
    cout << "Abiturient copy constructor created at address: " << this << endl;
    printArrayAddress();
}

Abiturient::~Abiturient() {
    printArrayAddress();

    if (marks != nullptr) {
        delete[] marks;
        marks = nullptr;
    }
    cout << "Abiturient object destroyed at address: " << this << endl;
    
}

void Abiturient::setSurname(string sName) {
    surname = sName;
}

void Abiturient::setFirstName(string fName) {
    firstName = fName;
}

void Abiturient::setMiddleName(string mName) {
    middleName = mName;
}

void Abiturient::setAddress(string addr) {
    address = addr;
}

void Abiturient::setMarks(int num) {
    if (marks != nullptr) {
        delete[] marks;
    }
    numMarks = num;
    marks = new int[numMarks];
    averageMark = 0.0;
    for (int i = 0; i < numMarks; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
        averageMark += marks[i];
    }
    if (numMarks > 0) {
        averageMark /= numMarks;
    }
}

int* Abiturient::getMarks() {
    return marks;
}

double Abiturient::getAverageMark() const {
    return averageMark;
}

void Abiturient::checkExclusion() const {
    int count = 0;
    for (int i = 0; i < numMarks; i++) {
        if (marks[i] <= 2) {
            count++;
        }
    }

    if (count >= 2) {
        cout << "Student " << surname << " " << firstName << " " << middleName << " should be excluded." << endl;
    }
}

void Abiturient::displayInfo() const {
    cout << "Name: " << firstName << " " << middleName << " " << surname << endl;
    cout << "Address: " << address << endl;
    cout << "Average Mark: " << averageMark << endl;
}

void Abiturient::printObjectAddress() const {
    cout << "Object Address: " << this << endl;
}

void Abiturient::printArrayAddress() const {
    cout << "Marks Array Address: " << marks << endl;
}
