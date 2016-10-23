#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>

using namespace std;


class Book {

public:
	string title;
	int quantity;
	double price;
	Book* next;
};


#endif BOOK_H
