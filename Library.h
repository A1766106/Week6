#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Book.h"
#include <vector>

using namespace std;

class Library
{
    public: 
    string name;
    Library(string given_name);
    void addBook(Book a);
    vector<Book> stockedBooks;
    void printBooks();
    
};

#endif