#include "Abiturient.h"
#include <iostream>
using namespace std;

void Abiturient::setSurname(string surname) {
	this->surname = surname;
};

void Abiturient::setFirstName(string firstName) {
	this->firstName = firstName;
};

void Abiturient::setMiddleName(string middleName) {
	this->middleName = middleName;
};

void Abiturient::setAddress(string address) {
	this->address = address;
};

void Abiturient::setMarks(int m1, int m2, int m3, int m4, int m5) {
	this->marks[0] = m1;
	this->marks[1] = m2;
	this->marks[2] = m3;
	this->marks[3] = m4;
	this->marks[4] = m5;
};

int* Abiturient::getMarks() {
	return marks;
};

void Abiturient::checkExclusion() {
	int count = 0;

	for (int i = 0; i < 5; i++ ) {
		if (marks[i] <= 2) {
			count ++; 
		}
	};

	if (count >= 2) {
		cout << "Student " << surname << " " << firstName << " " << middleName << " should be excluded." << endl;
	}

};


Abiturient::Abiturient() {
	this->surname = " ";
	this->firstName = " ";
	this->middleName = " ";
	this->address = " ";
	
	for (int i = 0; i < 5; i++) {
		this->marks[i] = 0;
	};
};


	Abiturient::Abiturient(string surname, string firstName, string middleName, string address, int m1, int m2, int m3, int m4, int m5) {
		this->surname = surname;
		this->firstName = firstName;
		this->middleName = middleName;
		this->address = address;
		this->marks[0] = m1;
		this->marks[1] = m2;
		this->marks[2] = m3;
		this->marks[3] = m4;
		this->marks[4] = m5;
	};

	Abiturient::~Abiturient() {};
