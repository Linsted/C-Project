#pragma once
#include <iostream>
using namespace std;

class Number {
	int firstNumber;
	int secondNumber;


public:
	void print();

	Number();
	Number(int firstNumber, int secondNumber);

	// �������������� ���������
	Number operator+(const Number& other) const;
	Number operator-(const Number& other) const;
	Number operator*(const Number& other) const;
	Number operator/(const Number& other) const;

	// �������������� ����������� � ������������ ���������� �� ����������
	Number& operator++();       
	Number operator++(int);     
	Number& operator--();       
	Number operator--(int);     



	~Number();
};

#include "Number.cpp"