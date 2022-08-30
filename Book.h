#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Book
{
    public:
        string name;
        string author;
        int year;
        int status;
        void checkStatus();
        void checkout();
        void checkin();
        Book(string given_name, string given_author, int given_year);
        void printBook();
};

#endif