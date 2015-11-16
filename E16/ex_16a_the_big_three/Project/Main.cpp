#include "DLL_ChildClass.h"

#include <iostream>
using namespace std;

int main()
{

	/**************************************************************************
	Test assignment operator (more efficient implementation)
	**************************************************************************/

	DLL_ChildClass list1, list2, list3, list4, list5, list6;

	// list1 is empty, list2 has 3 nodes
	list2.insertBack(1);
	list2.insertBack(2);
	list2.insertBack(3);
	list1 = list2;

	// list3 has 2 nodes, list2 has 3 nodes
	list3.insertBack(10);
	list3.insertBack(11);
	list3 = list2;

	// list4 has 3 nodes, list2 has 3 nodes
	list4.insertBack(20);
	list4.insertBack(21);
	list4.insertBack(22);
	list4 = list2;

	// list5 has 8 nodes, list2 has 3 nodes
	list5.insertBack(10);
	list5.insertBack(20);
	list5.insertBack(30);
	list5.insertBack(40);
	list5.insertBack(50);
	list5.insertBack(60);
	list5.insertBack(70);
	list5.insertBack(80);
	list5 = list2;

	// list2 has 3 nodes, list6 is empty
	list2 = list6;

	// assignment to itself
	list2 = list2;


	cout << endl << endl;
	system("Pause");
	return 0;
}
