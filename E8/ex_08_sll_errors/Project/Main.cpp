/*
Fullam, Bryan
CS A250
September 23, 2015

Exercise 8
*/

#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
	AnyList myList;

	myList.insertFront(2);
	myList.insertFront(3);
	myList.insertFront(4);
	myList.insertFront(5);
	myList.insertFront(6);

	cout << "Inserted: 2 3 4 5 6\n";
	cout << "\nList is: ";
	myList.print();

	cout << endl << endl;

	//Trying to delete an item that is not in the list
	cout << "\nDeleting 100...\n";
	myList.deleteNode(100);

	cout << "\nDeleting 2...\n";
	myList.deleteNode(2);
	myList.print();
	cout << "\n\nDeleting 3...\n";
	myList.deleteNode(3);
	myList.print();
	cout << "\n\nDeleting 4...\n";
	myList.deleteNode(4);
	myList.print();
	cout << "\n\nDeleting 5...\n";
	myList.deleteNode(5);
	myList.print();
	cout << "\n\nDeleting 6...\n";
	myList.deleteNode(6);
	myList.print();
		
	cout << endl;

	AnyList myEmptyList;
	cout << "\nDeleting 2 from an empty list...\n";
	myEmptyList.deleteNode(2);

	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}
