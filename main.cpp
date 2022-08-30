#include <iostream>
#include <stdlib.h>
#include <string>
#include "Book.h"
#include <vector>
#include "Library.h"

using namespace std;

int main()
{
    Book a1("Max's Adventures", "Maxwell", 2022);
    Book a2("Tom's Adventures", "Tom", 2021);
    Book a3("Sam's Adventures", "Sam", 2020);
    a1.printBook();
    a2.printBook();
    a3.printBook();
    Library b1("Adelaide");
    b1.addBook(a1);
    b1.printBooks();

    return 0;
}