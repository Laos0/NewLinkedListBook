#include "Book.h"
#include "BookList.h"

int main() {

	BookList list;
	list.insert("Rat", 3, 2.00);
	list.insert("Dog", 5, 4.00);
	list.insert("Cat", 3, 6.00);
	list.insert("Crane", 3, 2.00);
	list.insert("Snake", 5, 4.00);
	list.insert("Frog", 3, 6.00);
	//list.search("GOOO");

	/*cout << list.first->next->title << endl;
	cout << list.first->title << endl;
	cout << list.last->title << endl;
	cout << list.last->title << endl;
	*/

	list.search("Snake");
	list.search("Monster");
	list.print();
	

	system("pause");

	return 0;
}