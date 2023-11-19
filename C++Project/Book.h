#pragma once
#include <iostream>
#include "Student.h"
#include <vector>   
using namespace std;

class Student;

class Book
{
    string author;
    string title;
    string publisher;
    int year;
    int pageCount;

    vector<string> buyers;

   

public:

    void setAuthor(string author);

    void setTitle(string title);

    void setPublisher(string publisher);

    void setYear(int year);

    void setPageCount(int pageCount);

    void setBuyers(const vector<string>& buyers);

    friend void checkBuyer(const Book& book, const Student& student);
    //friend void Student::Show( Book& book);



    string getTitle();
    string getAuthor();
    vector<string> getBuyers();

    Book();
    Book(string author, string title, string publisher, int year, int pageCount, const vector<string>& buyers);

    ~Book();
};
