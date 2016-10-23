#include "BookList.h"
#include "Book.h"


BookList::BookList() {

}

BookList::~BookList() {

}

void BookList::search(string t) {
	Book* currentBook = first;
	bool isFound = false;
	do {
		if (currentBook->title == t) {

			cout << " Book found!" << endl;
			isFound = true;
			
		}
		else {
			cout << " Book cannot be found! " << endl;
			currentBook = currentBook->next;
		}


	} while (currentBook->next != NULL);

	//cout << first->next->title << endl;
	
	

void BookList::insert(string t, int q, double p) {


	if (count < 1) {
		first = new Book;
		first->title = t;
		first->price = p;
		first - next = NULL;
		first->quantity = q;
	}
	else if (count == 1) {
		last = new Book;
		last->title = t;
		last->next = NULL;
		last->price = p;
		last->quantity = q;
		first->next = last;
	}
	else{
		Book* temp = new Book;
		temp->next = NULL;
		temp = NULL;s
		temp->title = t;
		temp->price = p;
		temp->quantity = q;
		last->next = temp;
		last = temp;
	}



	count++;


}

void BookList::remove(string t) {

}

void BookList::print() {

}