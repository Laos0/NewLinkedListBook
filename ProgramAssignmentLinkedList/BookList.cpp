#include "BookList.h"
#include "Book.h"


BookList::BookList() {

}

BookList::~BookList() {

}

void BookList::search(string t) {

}

void BookList::insert(string t, int q, double p) {
	Book b;
	b.title = t;
	b.quantity = q;
	b.price = p;

	if (count < 1) {
		first = &b;

	}else{
		last = &b;
	}

	count++;


}

void BookList::remove(string t) {

}

void BookList::print() {

}