#pragma once
#include <iostream>
using namespace std;

class Book
{
    string author;
    string title;
    string publisher;
    int year;
    int pageCount;

public:
    void setAuthor(string a);

    void setTitle(string t);

    void setPublisher(string p);

    void setYear(int y);

    void setPageCount(int count);

   
    string getTitle();

    string getAuthor();
};

