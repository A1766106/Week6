#include "Book.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Book::Book(string given_name, string given_author, int given_year)
{
    name = given_name;
    author = given_author;
    year = given_year;
    status = 1;

}

void Book::checkStatus()
{
    if(status == 1)
    {
        cout << "The book is in stock" << endl;
    }
    else
    {
        cout << "The book is out of stock" << endl;
    }
}

void Book::checkin()
{
    if(status == 0)
    {
        status = 1;
        cout << "Book checked in" << endl;
    }
    else
    {
        cout << "An error has occured please check if book is checked in our out!" << endl;
    }
}

void Book::checkout()
{
    if(status == 1)
    {
        status = 0;
        cout << "Book checked out" << endl;
    }
    else
    {
        cout << "An error has occured please check if book is checked in our out!" << endl;
    }
}

void Book::printBook()
{
    cout << "Name: " << name << ", Author: " << author << ", Year: " << year << endl;
}
