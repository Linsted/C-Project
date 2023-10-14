#include "Abiturient.h"
#include <iostream>
using namespace std;

void Abiturient::setSurname(string sName) {
	surname = sName;
};

void Abiturient::setFirstName(string fName) {
	firstName = fName;
};

void Abiturient::setMiddleName(string mName) {
	middleName = mName;
};

void Abiturient::setAddress(string addr) {
	address = addr;
};

void Abiturient::setMarks(int m1, int m2, int m3, int m4, int m5) {
	marks[0] = m1;
	marks[1] = m2;
	marks[2] = m3;
	marks[3] = m4;
	marks[4] = m5;
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

