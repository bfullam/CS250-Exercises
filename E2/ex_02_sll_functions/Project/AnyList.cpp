#include "AnyList.h"

	//constructor
AnyList::AnyList()
{
	ptrToFirst = NULL;
	count = 0;
}

	//print
void AnyList::print() const
{
	if (ptrToFirst == NULL)
		cerr << "List is empty.";
	else
	{
		Node *current;	//create a pointer to traverse the list 
		current = ptrToFirst;	//set the current pointer to point to the first node

		while (current != NULL)	//while the current pointer is not pointing to NULL
		{						//  that is, the current pointer has not reached the 
			//  end of the list
			cout << current->getData() << " ";	//output the data 
			current = current->getPtrToNext();		//move the current pointer forward
		}
	}
}

	//destroyList
void AnyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
	while (ptrToFirst != NULL)
    {
		temp = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
        delete temp;
		temp = NULL;
    }

	count = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}

/*************************************************

		Write your code below this line.

*************************************************/

//Definition function getNumOfItems
int AnyList::getNumOfItems()
{
	return count;
}


//Definition of function insertBack()
void AnyList::insertBack(int num)
{
	Node *newNode = new Node; //create a new node
	newNode->setData(num); //store data in new node

	if (ptrToFirst == NULL) //if list is empty
		ptrToFirst = newNode; // set node as first element in list
	else if (ptrToFirst->getPtrToNext() == NULL) //if only one node in list
		ptrToFirst->setPtrToNext(newNode); //set first node to point to new node
	else
	{
		Node *current;
		current = ptrToFirst; //create node to traverse list

		while (current->getPtrToNext() != NULL) //cycle until pointing to last element in list
		{
			current = current->getPtrToNext(); //set current to next node
		}
		current->setPtrToNext(newNode); //set current last node to point to new last node
	}
	count++; //increment count
}




//Definition function deleteFirstNode
void AnyList::deleteFirstNode()
{
	if (ptrToFirst == NULL)
	{
		cerr << "Cannot delete from an empty list.";
	}
	else
	{
		Node *temp = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
		delete temp;
		count--;
	}

}
