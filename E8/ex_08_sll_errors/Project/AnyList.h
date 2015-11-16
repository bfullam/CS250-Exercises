#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>		//Need to include for NULL			
using namespace std;

class Node
{
public:
	Node() : data(0), link(NULL){}
    Node(int theData, Node *theLink) : data(theData), link(theLink){}
    Node* getLink( ) const { return link; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
    void setLink(Node *theLink) { link = theLink; }
	~Node(){};
private:
    int data;		
    Node *link;	//pointer that points to next node
};


class AnyList
{
public:
	AnyList();	
	void insertFront(int);	
	void deleteNode(int);	
	void print() const;
	void destroyList();
	void test();
	~AnyList();

private:
	Node *first; 
	int count;	 
};

#endif