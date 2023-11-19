#include "Book.h"
#include <iostream>
using namespace std;

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setTitle(string title) {
    this->title = title;
}

void Book::setPublisher(string publisher) {
    this->publisher = publisher;
}

void Book::setYear(int year) {
    this->year = year;
}

void Book::setPageCount(int pageCount) {
    this->pageCount = pageCount;
}

void Book::setBuyers(const vector<string>& buyers)
{
    this->buyers = buyers;
}


string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

vector<string> Book::getBuyers()
{
    return buyers;
}

Book::Book() {
    this->author = " ";
    this->title = " ";
    this->publisher = " ";
    this->year = 0;
    this->pageCount = 0;
}

Book::Book(string author, string title, string publisher, int year, int pageCount, const vector<string>& buyers) {
    this->author = author;
    this->title = title;
    this->publisher = publisher;
    this->year = year;
    this->pageCount = pageCount;
    this->buyers = buyers; 
}

Book::~Book() {};
