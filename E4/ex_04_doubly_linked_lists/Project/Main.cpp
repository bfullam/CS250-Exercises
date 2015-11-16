/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"
#include "Functions.cpp"

#include <iostream>
using namespace std;

int main()
{
	// Create your testing cases here.
	DoublyList myList;
	
	cout << "\nTESTING - Start inserting...";
	myList.insertFront(9);
	myList.insertFront(8);
	myList.insertFront(5);
	myList.insertFront(4);
	myList.insertFront(2);

	cout << "\nInserted: 2 4 5 8 9";
	cout << "\nList is: ";
	myList.print();
	cout << endl;

	cout << "\nList backwards is: ";
	myList.reversePrint();
	cout << endl;

	cout << "\n TESING - Inserting in order...";
	myList.insertInOrder(6);
	myList.insertInOrder(9);
	myList.insertInOrder(10);
	myList.insertInOrder(1);
	cout << "\nList is now: ";
	myList.print();
	cout << endl;

	cout << endl << endl;
	system("Pause");
	return 0;
}
