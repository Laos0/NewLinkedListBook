#include "BookList.h"
#include "Book.h"
#include <vector>
#include <algorithm>
#include <iterator>



BookList::BookList() {
	count = 0;
}

BookList::~BookList() {

}

void BookList::search(string t) {
	Book* tB = new Book;
	tB->title = t;
	bool isExist = doesExist(tB, true);
	if (isExist) {
		cout << "Book was found! " << endl;

	}
	else {
		cout << "Book cannot be found!" << endl;
	}
	/*Book* currentBook = first;
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
	}*/
	//cout << first->next->title << endl;

}

	void BookList::insert(string t, int q, double p) {

		Book* b = new Book;
		b->title = t;
		b->price = p;
		b->quantity = q;
		b->next = NULL;
		count += b->quantity;
		
		

		if (insertCounter > 0) {
			bool myResult = doesExist(b, false);
			
			if (myResult == false) {
				books.push_back(b);
			}
			else {
				updateBookQuantity(b);
			}
		}
		else {
			books.push_back(b);
		}



		// IF this is first book then do this
		if (insertCounter < 1) {
			first = b;
		}
		else if (insertCounter == 1) {
			first->next = b;
			last = b;
			
		}
		else {
			last->next = b;
			last = b;

		}



		insertCounter++;


	}


void BookList::remove(string t) {
	int index = NULL;
	bool isFound = false;


	for (int i = 0; i < books.size(); i++) {
		if (books[i]->title.compare(t) == 0) {
			index = i;
			isFound = true;
			break;
		}
	}

	
	if (isFound) {
		// Reassign the next previous or next pointer
		if (index > 0 || index != books.size()) {
			//books[index - 1]->next = books[index + 1];
		}
		else if (index == books.size()) {
			//books[index - 1]->next = NULL;
			//last = books[index - 1];
		}
		/*else if (index == 0) {
			if (books[index]->next != NULL) {
				first = books[index + 1];
			}
		}*/

		// Delete the book from booklist
		books.erase(books.begin() + index);
	}
	else {
		cout << "Book is not found. " << endl;
	}
} 

void BookList::print() {

	for (int i = 0; i < books.size(); i++) {
		cout << "Title: " << books[i]->title << ", Quantity: " << books[i]->quantity << ", Price: " << books[i]->price << endl;
	}
	
	
	/*Book* currentBook = first;

	do {
		currentBook = currentBook->next;
		cout << currentBook->title << endl;

	} while (currentBook->next != NULL);
	*/

}

void BookList::sort() {

}

bool BookList::doesExist(Book* searchedBook, bool doPrint) {

	for (int i = 0; i < books.size(); i++) {
		if (books[i]->title.compare(searchedBook->title) == 0) {

			if (doPrint) {
				cout << "Title: " << books[i]->title << ", Quantity: " << books[i]->quantity << ", Price: " << books[i]->price << endl;
			}
			return true;
		}

	}
	return false;
}

void BookList::updateBookQuantity(Book* t) {

	for (int i = 0; i < books.size(); i++) {
		if (books[i]->title.compare(t->title) == 0) {
			books[i]->quantity += t->quantity;
			books[i]->price = t->price;
			break;
		}
	}
}

