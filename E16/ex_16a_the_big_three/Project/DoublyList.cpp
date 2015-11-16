#include "DoublyList.h"

	//constructor
DoublyList::DoublyList()
{
	first = NULL;
	last = NULL;
	count = 0;
}

	//insertBack
void DoublyList::insertBack(int newData)
{
	Node *newNode = new Node(newData,NULL,NULL); 

	if(first == NULL) 
    {
       first = newNode;		//set "first" to be the new node
       last = newNode;		//set "last" to be the new node
    }
    else
	{
        last->setNextLink(newNode);	
		newNode->setPreviousLink(last);		
		last = newNode;					
	}

	++count;
}

Node& DoublyList::getFirstNodeAddress() const
{
	return *first; // return the address of the node first is pointing to
}

Node& DoublyList::getLastNodeAddress() const
{
	return *last; // return the address of the node last is pointing to
}

int DoublyList::getCount() const
{
	return count;
}

	//destroyList
void DoublyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
    while (first != NULL)
    {
        temp = first;
        first = first->getNextLink();
        delete temp;
		temp = NULL;
    }

    last = NULL;
	count = 0;
}

	//destructor
DoublyList::~DoublyList()
{
	destroyList();
}


