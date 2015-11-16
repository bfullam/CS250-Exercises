/*	Fullam, Bryan
CS A250
September 8, 2015

Exercise 2

*/

#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
	AnyList myList;

	cout << "TESTING - Check if list is empty..."; 
	cout << "\nTotal number of items: " << myList.getNumOfItems() << endl;
	
	cout << "\nTESTING - Start inserting...";
	myList.insertBack(2);
	myList.insertBack(4);
	myList.insertBack(5);
	myList.insertBack(8);
	myList.insertBack(9);

	cout << "\nInserted: 2 4 5 8 9";
	cout << "\nList is: ";
	myList.print();
	cout << endl;

	cout << "\nTESTING - Start deleting...\n";
	cout << "\nDelete first node... ";
	myList.deleteFirstNode();
	cout << "\nTotal number of items is now: " << myList.getNumOfItems();
	cout << "\nList is now: ";
	myList.print();
	cout << endl;
	cout << "\nDelete first node... ";
	myList.deleteFirstNode();
	cout << "\nTotal number of items is now: " << myList.getNumOfItems();
	cout << "\nList is now: ";
	myList.print();
	cout << endl;
	cout << "\nDelete first node... ";
	myList.deleteFirstNode();
	cout << "\nTotal number of items is now: " << myList.getNumOfItems();
	cout << "\nList is now: ";
	myList.print();
	cout << endl;
	cout << "\nDelete first node... ";
	myList.deleteFirstNode();
	cout << "\nTotal number of items is now: " << myList.getNumOfItems();
	cout << "\nList is now: ";
	myList.print();
	cout << endl;
	cout << "\nDelete first node... ";
	myList.deleteFirstNode();
	cout << "\nTotal number of items is now: " << myList.getNumOfItems();
	cout << "\nList is now: ";
	myList.print();
	cout << endl;
	cout << "\nDelete first node... ";
	myList.deleteFirstNode();
	cout << "\nTotal number of items is now: " << myList.getNumOfItems();
	cout << "\nList is now: ";
	myList.print();
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}