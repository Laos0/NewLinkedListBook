#include "Book.h"
#include "BookList.h"
#include <vector>
#include <algorithm>
#include <iterator>

void init() {
	cout << "This is a book library application." << endl <<
		"Select from: " << endl <<
		"1: Insert book " << endl <<
		"2: Delete book by title " << endl <<
		"3: Print booklist" << endl <<
		"4: Search for book" << endl <<
		"5: Exit" << endl;

}

bool validateNewBook(string t, int q, double p) {
	if (t.empty()) {
		return false;
	}

	if (q == 0) {
		return false;
	}
	
	if (p == 0) {
		return false;
	}

	return true;

}


int main() {
	
	BookList list;

	list.insert("Rat", 3, 6.00);
	list.insert("Snake", 5, 4.00);
	list.insert("Crane", 4, 2.00);
	//list.remove("Crane");
	list.print();
	


	int userSelection = 0;
	bool isDone = false;

	string userTitle;
	int userQuantity;
	double userPrice;


	do {
		init();
		cin >> userSelection;

		if (userSelection == 1 || userSelection == 2 || userSelection == 3 || userSelection == 4 ) {

			if (userSelection == 1) {
				cout << "inserting..." << endl;
				cout << "Enter Title. " << endl;
				cin >> userTitle;
				cout << "Enter Quantity. " << endl;
				cin >> userQuantity;
				cout << "Enter price." << endl;
				cin >> userPrice;

				if (validateNewBook(userTitle, userQuantity, userPrice)) {
					list.insert(userTitle, userQuantity, userPrice);
				}
				else {
					cout << "Book is not valid." << endl;
				}
				/*userTitle = "";
				userQuantity = NULL;
				userPrice = NULL;
				*/
			}
			else if (userSelection == 2) {
				cout << "Deleting..." << endl;
				cout << "Enter the book title to delete." << endl;
				string userTitle2;
				cin >> userTitle2;
				if (!userTitle2.empty()) {
					list.remove(userTitle2);
				}
				else {
					cout << "Invalid title." << endl;
				}

			}
			else if (userSelection == 3) {
				cout << "Printing..." << endl;
				list.print();
			}
			else if (userSelection == 4) {
				cout << "Searching..." << endl;
				cout << "Type title to search" << endl;
				string userTitle3;
				cin >> userTitle3;
				if (!userTitle3.empty()) {
					list.search(userTitle3);
				}
				else {
					cout << "Invalid search." << endl;
				}
			}
			cout << "-----------------------------------------------------------" << endl;

		}
		else {
			isDone = true;
		}

	}
	while (!isDone);

	





	/*list.insert("Cat", 3, 2.00);
	list.insert("Crane", 4, 2.00);
	list.insert("Dog", 5, 4.00);
	list.insert("Frog", 3, 6.00);
	list.insert("Rat", 3, 6.00);
	list.insert("Snake", 5, 4.00);
	list.insert("Crane", 4, 2.00);



	list.remove("Crane");
	list.print();
	*/








	/*vector<Book*>books;

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

	*/



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