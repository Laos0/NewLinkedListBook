#include "BookList.h"
#include "Book.h"


BookList::BookList() {
	count = 0;
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
			currentBook = currentBook->next;
		}


	} while (isFound == false && currentBook->next !=NULL);
	if (!isFound) {
		cout << "book not found" << endl;
	}
	//cout << first->next->title << endl;

}

	void BookList::insert(string t, int q, double p) {


		if (count < 1) {
			first = new Book;
			first->title = t;
			first->price = p;
			first-> next = NULL;
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
		else {
			Book* temp = new Book;
			temp->next = NULL;
			temp->title = t;
			temp->price = p;
			temp->quantity = q;
			last->next = temp;
			last = temp;
			temp = NULL;
		}



		count++;


	}


void BookList::remove(string t) {

}

void BookList::print() {

}