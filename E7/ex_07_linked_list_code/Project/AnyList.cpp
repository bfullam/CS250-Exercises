#include "AnyList.h"

	//constructor
AnyList::AnyList()
{
	first = NULL;
	count = 0;
}

	//createList
void AnyList::createList()
{	
	/*
		Question 1
		Declare a pointer pNode that points to objects of class Node.
	*/
	Node *pNode;

	/*
		Question 2
		Use the default constructor to create a new node and make 
		pNode point to it.
	*/
	pNode = new Node;

	/*
		Question 3
		What is the value of the data stored in the node pointed by pNode?
		
		Answer: 0
	*/

	/*
		Question 4
		Store integer 2 in the node you just created.
	*/
	pNode->setData(2);

	/*
		Question 5
		Make the node you just created the first node in the list.
	*/
	first = pNode;
	count++;

	/*
		Did you update the count?
	*/

	/*
		Question 6
		Using pointer pNode, create another Node, but this time 
		use the overloaded constructor and assign to the member 
		variable data the value 4 and to the pointer next the 
		value NULL.
	*/
	pNode = new Node(4, NULL);
	count++;

	/*
		Question 7
		Make the first node of your list point to the newly
		created node, and then make pNode point to the first node.
	*/
	first->setNext(pNode);
	pNode = first;

	/*
		Did you forget to increment the count?
	*/


	/*
		Question 7
		What does your list look like now?

		Answer: (first)->(2)->(4)->NULL
	*/

	/*
		Question 8
		Move pointer pNode forward to the next node. 

	*/
	pNode = first->getNext();

	/*
		Question 9
		Using only pointer pNode add a new node to the 
		back of the list, storing the value 6, and 
		increment the member variable member count.
		Use only a total of 2 statements.

	*/
	pNode->setNext(new Node(6, NULL));
	count++;

	/*
		Question 10
		Using only pointer pNode add three additional 
		nodes to the list, so that the list becomes:

		(first) 2 4 6 3 8 9

	*/
	pNode = pNode->getNext();
	pNode->setNext(new Node(3, new Node(8, new Node(9, NULL))));
	count += 3;

	/*
		Question 11
		Delete the node that stores 4 (second node), 
		without creating additional pointers.

	*/
	pNode = first->getNext();
	first->setNext(pNode->getNext());
	delete pNode;
	count--;

	/*
		Question 12
		Now your list looks like this:

		(first) 2 6 3 8 9

		Using a while loop, print all elements in the 
		list, except the last, without creating any 
		new pointers and without using the member 
		variable count.

	*/
	pNode = first;
	while (pNode->getNext() != NULL)
	{
		cout << pNode->getData() << " ";
		pNode = pNode->getNext();
	}

	/*
		Question 13
		
		Your list still looks like this:

		(first) 2 6 3 8 9

		To which node is pointer pNode pointing?

		Answer: 9
	*/

	/*
		Question 14

		Your list still looks like this:

		(first) 2 6 3 8 9

		Delete the first node.
	*/
	pNode = first;
	first = first->getNext();
	delete pNode;
	count--;



	/*
		Did you update the count?
	*/

	/*
		Question 15

		After deleting the first node, your list looks like this:

		first 6  3  8  9

		In a single statement, add a new node in front of the list, 
		making it the first node of the list. Your node should 
		store the value 1. Use a second statement to update the 
		member variable count.

	*/
	first = new Node(1, first);
	count++;

	/*

		Check the debugger to see if your list looks as expected.
	*/
}


	//destroyList
void AnyList::destroyList()
{ 
    Node  *current;
	
    while (first != NULL)
    {
        current = first;
        first = first->getNext();
        delete current;
		current = NULL;
    }

	count = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}