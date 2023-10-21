#pragma once
#include <iostream>
using namespace std;

class Student
{
    string surname;
    string name;
    string secondName;
    string birthDate;
    string address;
    int phone;
    string faculty;
    int course;

public:
    void setSurname(string studentSurname);

    void setName(string studentName);

    void setSecondName(string studentSecondName);

    void setBirthDate(string studentBirthDate);

    void setAddress(string studentAddress);

    void setPhone(int studentPhone);

    void setFaculty(string studentFaculty);

    void setCourse(int studentCourse);

    string getSurname();

    string getName();

    string getSecondName();

    string getFaculty();

    int getCourse();

    void print();

    Student();
    Student(string surname, string name, string secondName, string birthDate, string address, int phone, string faculty, int course);

};

