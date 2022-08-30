#include "Book.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Library.h"

using namespace std;

Library::Library(string given_name)
{
    name = given_name;
}

void Library::addBook(Book a)
{
    stockedBooks.push_back(a);
}

void Library::printBooks()
{
    for(int i = 0; i < stockedBooks.size(); i++)
    {
        cout << stockedBooks[i].name << endl;
    }
}