#include "Book.h"
#include "BookList.h"
#include <vector>
#include <algorithm>
#include <iterator>


int main() {

	vector<Book*>books;

	Book* b = new Book;
	b->title = "My Book 1";
	books.push_back(b);

	b = new Book;
	b->title = "My Book 2";
	books.push_back(b);

	b = new Book;
	b->title = "My Book 3";
	books.push_back(b);

	cout << books[1]->title << endl;

	

	/*vector<string>randomString = { "Doggy","cat", "To", "my", "house" };
	
	for (int i = 0; i < randomString.size(); i++) {

		cout << randomString[i] << endl;
	}
	vector<string>secondRandomStr;
	secondRandomStr.push_back("I");
	secondRandomStr.push_back("Am");
	secondRandomStr.push_back("SONY");
	secondRandomStr.erase(secondRandomStr.begin());
	for (int i = 0; secondRandomStr.size(); i++) {
		cout << secondRandomStr[i] << endl;
	}*/
	

	
	BookList list;
	list.insert("Cat", 3, 2.00);
	list.insert("Crane", 3, 2.00);
	list.insert("Dog", 5, 4.00);
	list.insert("Frog", 3, 6.00);
	list.insert("Rat", 3, 6.00);
	list.insert("Snake", 5, 4.00);
	
	//list.search("GOOO");

	/*cout << list.first->next->title << endl;
	cout << list.first->title << endl;
	cout << list.last->title << endl;
	cout << list.last->title << endl;
	*/

	/*
	list.search("Snake");
	list.search("Monster");
	list.print();
	*/
	
	


	system("pause");

	return 0;
}