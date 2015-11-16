#include "AnyList.h"

AnyList::AnyList()
{
	first = NULL;
	count = 0;
}

void AnyList::insertFront(int newData)
{	
	Node *newNode = new Node;
	newNode->setData(newData);
	if (first != NULL)
	{
		newNode->setLink(first);
	}				
	first = newNode;
	count++;
}

void AnyList::deleteNode(int deleteData)
{
	Node *current;		
	Node *temp;	
	bool found = false;	
	if (count == 0)
		cerr << "Cannot delete from an empty list.\n";
	else if (first->getData() == deleteData)  
	{
		first = first->getLink();
		current = first;					
		delete current;
		current = NULL;
		found = true;
		count--;
	}
	else 
	{
		temp = first;		
		current = first; 

		while ((current != NULL) && (!found))	
		{
			if(current->getData() == deleteData)	
			{										
				temp->setLink(current->getLink()); 
				delete current;
				current = NULL;
				found = true;
				count--;
			}
			else
			{
				if (temp != current)
					temp = temp->getLink();
				current = current->getLink();
				
			}
		}			
	}
	if (!found && count != 0)
		cerr << "Item to be deleted is not in the list." << endl;	
}

void AnyList::print() const 
{
	Node *current;	
	current = first;	

	while (current != NULL)
	{
		cout << current->getData() << " ";
		current = current->getLink();
	}

}

void AnyList::destroyList()
{ 
	Node  *temp = NULL;
	
    while (first != NULL)
    {
        first = first->getLink();
        delete first;
		temp = NULL;
    }
}

AnyList::~AnyList()
{
	destroyList();
}