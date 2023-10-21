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

Student::Student() {
     surname = ' ';
     name = ' ';
     secondName = ' ';
     birthDate = ' ';
     address = ' ';
     phone = 0;
     faculty = ' ';
     course = 1;
};

Student::Student(string surnameValue, string nameValue, string secondNameValue, string birthDateValue, string addressValue, int phoneValue, string facultyValue, int courseValue) {
    surname = surnameValue;
    name = nameValue;
    secondName = secondNameValue;
    birthDate = birthDateValue;
    address = addressValue;
    phone = phoneValue;
    faculty = facultyValue;
    course = courseValue;
}

void Student::print() {
    cout << "Student: " << surname << ", " << name << ", " << secondName << ", " << birthDate << ", " << address << ", " << phone << ", " << faculty << ", " << course << endl;
};
