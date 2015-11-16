#include "AnyList.h"


//constructor
AnyList::AnyList()
{
	first = NULL;
	count = 0;
}

//insertFront
void AnyList::insertFront(const int a[], int numOfElem)
{	
	for (int i = 0; i < numOfElem; ++i)
	{
		Node *temp = new Node(a[i], first);
		first = temp;
	}

	count = numOfElem;
}

//getNumOfElem
int AnyList::getNumOfElem() const
{
	return count;
}

//destroyList
void AnyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
	while (first != NULL)
    {
		temp = first;
		first = first->getNext();
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


/**************************************************************************************

	WRITE YOUR IMPLEMENTATION BELOW THIS LINE.
	PRINT ONLY THE FUNCTIONS BELOW.
	
***************************************************************************************/
/*
	Fullam, Bryan
	CS A250
	October 6, 2015

	Exercise 10
*/


// Definition of overloaded insertion stream operator as a friend functionn
ostream& operator<< (ostream& out, const AnyList& list)
{
	
	if (list.getNumOfElem() > 0)
	{
		Node *p1 = list.first;
		while (p1 != NULL)
		{
			out << p1->getData() << " ";
			p1 = p1->getNext();
		}
		return out;
	}
	cerr << "List is empty";
	return out;
}


// Definition of overloaded comparison operator == as a member function
bool AnyList::operator== (const AnyList& list) const
{
	if (getNumOfElem() == list.getNumOfElem())
	{
		
		Node *p1 = first;
		Node *p2 = list.first;
		while (p1->getData() == p2->getData())
		{
			if (p1->getNext() == NULL && p2->getNext() == NULL)
				return true;
			p1 = p1->getNext();
			p2 = p2->getNext();
		}
		
	}
	return false;
}