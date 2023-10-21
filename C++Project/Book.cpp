#include "Book.h"
#include <iostream>
using namespace std;

void Book::setAuthor(string a) {
    author = a;
}

void Book::setTitle(string t) {
    title = t;
}

void Book::setPublisher(string p) {
    publisher = p;
}

void Book::setYear(int y) {
    year = y;
}

void Book::setPageCount(int count) {
    pageCount = count;
}


string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

Book::Book() {
    author = " ";
    title = " ";
    publisher = " ";
    year = 0;
    pageCount = 0;
}

Book::Book(string a, string t, string p, int y, int count) {
    author = a;
    title = t;
    publisher = p;
    year = y;
    pageCount = count;
}