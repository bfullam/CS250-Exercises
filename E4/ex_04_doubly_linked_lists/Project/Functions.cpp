/*
	Fullam, Bryan
	CS A250
	September 15, 2015

	Exercise 4
*/

#include "DoublyList.h"

//insertInOrder
void DoublyList::insertInOrder(int insertItem)
{
	//create node to be inserted and fill with data
	Node *newNode = new Node;
	newNode->setData(insertItem);

	if (insertItem < first->getData()) //if new node needs to be first
	{
		newNode->setNextLink(first);
		first->setPreviousLink(newNode);
		first = newNode;
	}
	else if (insertItem > last->getData()) //if new node needs to be last
		last->setNextLink(newNode);
	else if (first != NULL) //in case list is empty
	{
		Node *temp = first;
		while (insertItem > temp->getData()) //cycle list until pointing to larger than insertItem
		{
			temp = temp->getNextLink();
		}

		//point nodes to correct ordered node
		newNode->setNextLink(temp);
		newNode->setPreviousLink(temp->getPreviousLink());
		temp->getPreviousLink()->setNextLink(newNode);
		temp->setPreviousLink(newNode);
	}
}

//print
void DoublyList::print() const
{
	if (first != NULL)
	{
		Node *temp = first;
		while (temp != NULL) //cycle through list and print
		{
			cout << temp->getData() << " ";
			temp = temp->getNextLink();
		}
	}
}

//reversePrint
void DoublyList::reversePrint() const
{
	if (last != NULL)
	{
		Node *temp = last;
		while (temp != NULL) //cycle backwards through list and print
		{
			cout << temp->getData() << " ";
			temp = temp->getPreviousLink();
		}
	}
}

//front
int DoublyList::front() const
{
	if (first != NULL)
		return first->getData();
	else
		terminate(); //end if list is empty
}

//back
int DoublyList::back() const
{
	if (last != NULL)
		return last->getData();
	else
		terminate(); //end if list is empty
}