#include "Number.h"
#include <iostream>
using namespace std;

Number::Number() {
	this->firstNumber = 0;
	this->secondNumber = 0;
}

Number::Number(int firstNumber, int secondNumber) {
	this->firstNumber = firstNumber;
	this->secondNumber = secondNumber;

}



void Number::print() {
	cout << firstNumber << " " << secondNumber << endl;
}

// Реалізація перевантажених операторів
Number Number::operator+(const Number& other) const {
	Number result;
	result.firstNumber = this->firstNumber + other.firstNumber;
	result.secondNumber = this->secondNumber + other.secondNumber;
	return result;
}

Number Number::operator-(const Number& other) const {
    Number result;
    result.firstNumber = this->firstNumber - other.firstNumber;
    result.secondNumber = this->secondNumber - other.secondNumber;
    return result;
}

Number Number::operator*(const Number& other) const {
    Number result;
    result.firstNumber = this->firstNumber * other.firstNumber;
    result.secondNumber = this->secondNumber * other.secondNumber;
    return result;
}

Number Number::operator/(const Number& other) const {
    Number result;
    result.firstNumber = this->firstNumber / other.firstNumber;
    result.secondNumber = this->secondNumber / other.secondNumber;
    return result;
}

// Реалізація перевантажених операторів інкременту і декременту
Number& Number::operator++() {
    ++this->firstNumber;
    ++this->secondNumber;
    return *this;
}

Number Number::operator++(int) {
    Number temp(*this);
    ++(*this);
    return temp;
}

Number& Number::operator--() {
    --this->firstNumber;
    --this->secondNumber;
    return *this;
}

Number Number::operator--(int) {
    Number temp(*this);
    --(*this);
    return temp;
}

Number::~Number() {};

