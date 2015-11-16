/*
	Fullam, Bryan
	CS A250
	October 28, 2015
	
	Exercise 16
*/

#include "DLL_ChildClass.h"

// Definition of copy constructor
DLL_ChildClass::DLL_ChildClass(const DLL_ChildClass& param)
{
	//initialization
	first = NULL;
	last = NULL;
	count = 0;

	//copy param to this
	Node *p1 = param.first;
	for (int i = 0; i < param.count; i++)
	{
		insertBack(p1->getData());
		p1 = p1->getNextLink();
	}
}



// Definition of overloaded assignment operator
DLL_ChildClass* DLL_ChildClass::operator=(const DLL_ChildClass& param)
{
	if (&(*first) == &(*param.first))
	{
		cerr << "Attempted assignment to itself.";
	}
	else
	{
		if (count == 0)
		{
			//inserting new nodes in list1 with the data copied from list2
			Node *p1 = param.first;
			for (int i = 0; i < param.count; i++)
			{
				insertBack(p1->getData());
				p1 = p1->getNextLink();
			}
		}
		else if (param.count == 0)
		{
			//empty list1 to make it as list2, by destroying all the nodes
			destroyList();
		}
		else if (count < param.count)
		{
			//overwrite the data in all the nodes of list1
			Node *temp1 = first;
			Node *temp2 = param.first;			
			for (int i = 0; i < count; i++)
			{
				temp1->setData(temp2->getData());
				temp1 = temp1->getNextLink();
				temp2 = temp2->getNextLink();
			}

			//insert additional nodes to copy the rest of the data from list2.
			for (int i = 0; i < param.count - count; i++)
			{
				insertBack(temp2->getData());
				temp2 = temp2->getNextLink();
			}
		}
		else if (count > param.count)
		{
			//overwrite the data in the nodes of list1
			Node *temp1 = first;
			Node *temp2 = param.first;
			for (int i = 0; i < param.count; i++)
			{
				temp1->setData(temp2->getData());
				temp1 = temp1->getNextLink();
				temp2 = temp2->getNextLink();
			}
			last = temp1->getPreviousLink();
			last->setNextLink(NULL);

			//delete the extra nodes.
			while (temp1 != NULL)
			{
				Node *p1 = temp1;
				temp1 = temp1->getNextLink();
				delete p1;
			}
		}
		else if (count == param.count)
		{
			//copy the data from one list to the other
			Node *temp1 = first;
			Node *temp2 = param.first;
			for (int i = 0; i < count; i++)
			{
				temp1->setData(temp2->getData());
				temp1 = temp1->getNextLink();
				temp2 = temp2->getNextLink();
			}
		}
	}
	return this;
}
