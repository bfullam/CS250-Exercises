#include "DoublyList.h"

	//constructor
DoublyList::DoublyList()
{
	first = NULL;
	last = NULL;
	count = 0;
}

	//destructor
DoublyList::~DoublyList()
{
	destroyList();
}

	//insertFront
void DoublyList::insertFront(int newData)
{
	Node *newNode;					//Create a pointer that will point to a node
    newNode = new Node;				//Create a new node
	newNode->setData(newData);  

	if(first == NULL) 
    {
       first = newNode;		//set "first" to be the new node
       last = newNode;		//set "last" to be the new node
    }
    else
	{
        first->setPreviousLink(newNode);	//make first's previous link point to the new node
		newNode->setNextLink(first);		//make new node's next link point to first
		first = newNode;					//set "first" to the the new node
	}

	++count;
}

	//search
bool DoublyList::search(int searchData) const
{
	bool found = false;		//this is the return value

    Node *current;		//create a pointer to traverse the list
    current = first;		//set current to point to the first node

    while (current != NULL && !found)	//while the pointer does not point to NULL 
	{									//  (not the end of the list)
										//  and the item was not found

        if (current->getData() == searchData)	//if the data in current equals the data we need
            found = true;
        else
            current = current->getNextLink();	//move current to next node
	}

    return found;
}

	//deleteNode
void DoublyList::deleteNode(int deleteData) 
{
	//CASE 1: The list is empty
    if (first == NULL)		
	{
        cerr << "Cannot delete from an empty list." << endl;
	}
    else  
    {
		Node *current;		//create a pointer to traverse the list

		//CASE 2: The node to be deleted is the first node
        if (first->getData() == deleteData)   
		{
			current = first;				//make current point to what first is pointing to
			first = first->getNextLink();	//make first point to the next node

			//Case 2a: The list has only one node
			if (first == NULL)
				last = NULL;				
			else
				first->setPreviousLink(NULL);	//make first's previuos link point to NULL
				
			--count;			
			delete current;
			current = NULL;
			//found = true;
		}
		else //start searching the rest of the list
		{
			bool found = false;		//set a boolean value to keep track of whether 
							//   the item is found or not
			current = first;	//make current point to what first is pointing to

			while (current != NULL && !found) //while it is not the end of the list
			{								  //  and the item has not been found

				if (current->getData() == deleteData) //if current is pointing to the 
					found = true;					  //  data that needs to be deleted
				else
					current = current->getNextLink(); //move current forward
			}

			if (current == NULL)	//if we reached the end of the list, the item was not in the list
				cerr << "The item to be deleted is not in the list." << endl;
			//else the item was found somewhere in the rest of the list
			else         
			{
				//CASE 3: The item to be deleted is in the middle of the list
				if (current != last)		//if the node to delete is in the middle of the list
				{
					//make previous node point to next node
					current->getPreviousLink()->setNextLink(current->getNextLink());
					//make next node point to previous node
					current->getNextLink()->setPreviousLink(current->getPreviousLink());
				}				
				//CASE 4: The item to be deleted is the last node
				else
				{
					last = current->getPreviousLink();			//make "last" be the node before current 
					last->setNextLink(NULL);
				}

				--count;
				
				//delete the node 
				delete current;
				current = NULL;
			}
		}
	}	
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
