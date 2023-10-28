#include "Student.h"
#include <iostream>
using namespace std;

void Student::setSurname(string surname) {
    this->surname = surname;
};

void Student::setName(string name) {
    this->name = name;
};

void Student::setSecondName(string secondName) {
    this->secondName = secondName;
};

void Student::setBirthDate(string birthDate) {
    this->birthDate = birthDate;
};

void Student::setAddress(string address) {
    this->address = address;
};

void Student::setPhone(int phone) {
    this->phone = phone;
};

void Student::setFaculty(string faculty) {
    this->faculty = faculty;
}

void Student::setCourse(int course) {
    this->course = course;
}

string Student::getSurname() {
    return surname;
};

string Student::getName() {
    return name;
};

string Student::getSecondName() {
    return secondName;
}

string Student::getFaculty() {
    return faculty;
}

int Student::getCourse() {
    return course;
}

Student::Student() {
    this->surname = ' ';
    this->name = ' ';
    this->secondName = ' ';
    this->birthDate = ' ';
    this->address = ' ';
    this->phone = 0;
    this->faculty = ' ';
    this->course = 1;
};

Student::Student(string surname, string name, string secondName, string birthDate, string address, int phone, string faculty, int course) {
    this->surname = surname;
    this->name = name;
    this->secondName = secondName;
    this->birthDate = birthDate;
    this->address = address;
    this->phone = phone;
    this->faculty = faculty;
    this->course = course;
}

void Student::print() {
    cout << "Student: " << surname << ", " << name << ", " << secondName << ", " << birthDate << ", " << address << ", " << phone << ", " << faculty << ", " << course << endl;
};


Student::~Student() {}; 

