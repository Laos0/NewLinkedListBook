#ifndef BOOKLIST_H
#define BOOKLIST_H
#include<iostream>
#include "Book.h"
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class BookList {
public:

	// Constructors
	BookList();

	// Destructor 
	~BookList();

	// VECTOR 
	vector<Book*>books;

	// Search for the book with the given title t 
	// If the book is found, print its title
	// quantity in stock and price; otherwise report the book is not the stock
	void search(string t);

	// Insert a new book record into the list 
	// The book has title t, number of copies in stock 
	// is q, and price is p
	// Note that the vector of the books should be maintained 
	// in the lexicographical order of the book titles
	// If the book title already existed in the list 
	// then upgrade the record with q and p.
	void insert(string t, int q, double p);

	// Delete a book record, whose book title is t
	// if the book is not in the list, do nothing 
	void remove(string t);

	// Print the book records in the vector in the 
	// Lexicographical order of book titles 
	void print();

	// Replacement for Lexicorgraphical order, 
	void sort();

	// 
	bool doesExist(Book* t);

	void updateBookQuantity(Book* t);

	

private:
	Book* first; // pointer to first node
	Book* last; // pointer to last node 
	int count; // total number of books in stock 
	int insertCounter;

};


#endif // !BOOKLIST_H