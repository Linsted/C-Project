#include "Student.h"
#include <iostream>
using namespace std;

void Student::setSurname(string studentSurname) {
    surname = studentSurname;
};

void Student::setName(string studentName) {
    name = studentName;
};

void Student::setSecondName(string studentSecondName) {
    secondName = studentSecondName;
};

void Student::setBirthDate(string studentBirthDate) {
    birthDate = studentBirthDate;
};

void Student::setAddress(string studentAddress) {
    address = studentAddress;
};

void Student::setPhone(int studentPhone) {
    phone = studentPhone;
};

void Student::setFaculty(string studentFaculty) {
    faculty = studentFaculty;
}

void Student::setCourse(int studentCourse) {
    course = studentCourse;
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