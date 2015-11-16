/*
	Fullam, Bryan
	CS A250
	November 16, 2015

	Exercise 17
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <array>

using namespace std;

// Declaration function printVector.
// The function passes a vector and prints all
// the elements on one line, separated by a space.
// Use an iterator and a FOR loop.
void printVector(vector<int> vector);


// Declaration function printList.
// The function passes a list and prints all
// the elements on one line, separated by a space.
// Use an iterator and a FOR loop.
void printList(list<int> list);


int main()
{

	/***************************************************************************
			VECTORS
	***************************************************************************/
	cout << "  ***  STL VECTOR CLASS  ***  \n\n";

	// Use the default constructor to declare an integer vector v1.
	vector<int> v1;


	// Use function push_back to insert the following values in v1: 12, 73, 41,
	// 38, 25, 56, an 63 in this order.
	v1.push_back(12);
	v1.push_back(73);
	v1.push_back(41);
	v1.push_back(38);
	v1.push_back(25);
	v1.push_back(56);
	v1.push_back(63);


	// size_type size() const noexcept;
	// Create a variable of type int named sizeV1 and store the size of the vector.
	// Use function size to retrieve the size of the vector. 
	// Make sure you cast the return value of the function size to the appropriate type.
	int sizeV1 = static_cast<int>(v1.size());
	

	// Use a FOR loop to print out the vector.
	// Do NOT use an iterator.
	for (int i = 0; i < sizeV1; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;


	//void clear() noexcept;
	// Call the function clear on vector v1.
	v1.clear();


	// size_type size() const noexcept;
	// Call function size to print the size of v1.
	cout << v1.size() << endl;
	

	// size_type capacity() const noexcept;
	// Call function capacity to output the capacity of v1.
	cout << v1.capacity() << endl;


	// Create an array of integers containing: 10,11,12,13,14,15,16,17,18,19
	array<int, 10> myArray = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	

	// Use the default constructor to declare an integer vector v2.
	vector<int> v2;
	

	// void assign (InputIterator first, InputIterator last);
	// Use function assign to copy elements 12, 13, 14, 15, and 16 in v2.
	// One statement only.
	v2.assign(myArray.begin() + 2, myArray.end() - 3);
	

	// Call the function printVector to print v2.
	printVector(v2);

	// const_reference back() const;
	// Use the function back output the last element in the vector
	// (Notice that this back function returns a reference.)
	cout << v2.back() << endl;
	
		
	// Use the default constructor to declare an integer vector v3.
	vector<int> v3;


	// void assign (size_type n, const value_type& val);
	// Use function assign to insert the values 7, 7, 7, 7, and 7.
	// One statement only.
	v3.assign(5, 7);


	// Call the function printVector  to print v3.
	printVector(v3);
	

	//const_reference at(size_type n) const;
	// Use function at to replace the middle element with 100.
	// (Notice that this at function returns a reference.)
	v3.at(2) = 100;


	// Call the function printVector to print v3.
	printVector(v3);
	

	// vector (const vector& x);
	// Use the copy constructor to create a new vector v4 with the 
	// same elements of v3.
	vector<int> v4 = v3;

	// Call the function printVector to print v4.
	printVector(v4);

	// Create an iterator iterVector4 to point to the first element of v4.
	vector<int>::iterator iterVector4 = v4.begin();

	// Create an iterator iterVector2 to point to the second element of v2.
	vector<int>::iterator iterVector2 = v2.begin();
	iterVector2++;

	// void insert (iterator position, InputIterator first, InputIterator last);
	// Use function insert to insert the second, third, and fourth element
	// of v2 as the first, second, and third element of v4.
	v4.insert(iterVector4, iterVector2, iterVector2 + 3);

	// Call the function printVector to print v4.
	printVector(v4);

	// Use the function insert to insert three 0s at the end of v4.
	v4.insert(v4.end(), 3, 0);
	

	// void insert (iterator position, size_type n, const value_type& val);
	// Call the function printVector to print v4.
	printVector(v4);

	// bool empty() const noexcept;
	// const_reference back() const;
	// void pop_back();
	// Use a WHILE loop to remove and output each element of v2 backwards.
	// Use function empty for the loop condition, function back to output 
	// the last element, and function pop_back to remove elements.
	// (Notice that this back function returns a reference.)
	while (!v2.empty())
	{
		cout << v2.back() << " ";
		v2.pop_back();
	}


	// void resize (size_type n, const value_type& val);
	// Use function resize to insert three times number 4 in v2.
	v2.resize(v2.size() + 3, 4);


	// Call the function printVector to print v2.
	printVector(v2);

	// const_reference front() const;
	// Use function front to output the first element in v4.
	// (Notice that this front function returns a reference.)
	cout << v4.front() << endl;


	// void swap (vector& x);
	// Use function swap to swap v2 with v4.
	v2.swap(v4);


	// Call the function printVector to print v2.
	printVector(v2);


	// Create a new vector v5;
	vector<int> v5;

	// Use the overloaded assignment operator to copy all the elements of v2
	// into v5.
	v5 = v2;


	// void resize (size_type n);
	// size_type size() const noexcept;
	// Delete the last element of v2 by using the functions resize and size
	v2.resize(v2.size() - 1);


	// Call the function printVector to print v5.
	printVector(v2); //instructions say print v5, but example shows v2 printed
	

	// Create an iterator iterVector5 to point to the first element of v5.
	vector<int>::iterator iterVector5 = v5.begin();

	// iterator erase (const_iterator first, const_iterator last);
	// size_type size() const noexcept;
	// Call the function erase to delete the second half of v5.
	// Use function size to get the range.
	// (Notice that this erase function returns an iterator.)
	v5.erase(v5.begin() + v5.size()/ 2, v5.end());


	// Call the function printVector to print v5 again.
	printVector(v5);


	// iterator erase (const_iterator position);
	// Call the function erase to delete the first element of the vector.
	// (Notice that this erase function returns an iterator.)
	v5.erase(v5.begin());

	// Call the function printVector to print v5 again.
	printVector(v5);



	/***************************************************************************
			LISTS
	***************************************************************************/

	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  STL LIST CLASS  ***  \n\n\n";

	// Use the default constructor to create three lists of integers, intLis1,
	// intList2, and intList3.
	list<int> intLis1;
	list<int> intLis2;
	list<int> intLis3;

	// void push_back (const value_type& val);
	// Use the function push_back to insert the following values in the first list: 
	// 23 58 58 58 36 15 15 93 98 58
	intLis1.push_back(23);
	intLis1.push_back(58);
	intLis1.push_back(58);
	intLis1.push_back(58);
	intLis1.push_back(36);
	intLis1.push_back(15);
	intLis1.push_back(15);
	intLis1.push_back(93);
	intLis1.push_back(98);
	intLis1.push_back(58);
	

	// Call function printList to print intList1.
	printList(intLis1);


	//Using the overloaded assignment operator, copy elements of intList1 and intList2.
	intLis2 = intLis1;
    

	// Call function printList to print intList1.
	printList(intLis1);

	// void unique();
	//Remove all consecutive duplicates in the first list (browse the list of 
	//  functions in cplusplus.com to figure out which function you need to use).
	// --> This is only ONE statement.
	intLis1.unique();

	// Call function printList to print intList1.
	printList(intLis1);

	// void sort();
	//Sort all elements in the second list (browse the list of 
	//  functions in cplusplus.com to figure out which function you 
	//  need to use).
	// --> This is ONE statement only.
	intLis2.sort();

	// Call function printList to print intList2.
	printList(intLis2);
			
	// void push_back (const value_type& val);
	//Insert the following elements in the third list:
	//  13 23 25 136 198
	intLis3.push_back(13);
	intLis3.push_back(23);
	intLis3.push_back(25);
	intLis3.push_back(136);
	intLis3.push_back(198);


	// Call function printList to print intList3.
	printList(intLis3);

	// void merge (list& x);
	//Add to the second list all elements of the third list(browse the  
	//  list of functions in cplusplus.com to figure out which function  
	//  you need to use).
	// --> This is ONE statement only.
	intLis2.merge(intLis3);

	// Call function printList to print intList2.
	printList(intLis2);


	// Create statements using the functions below.
	// Is the output what you expected?

	cout << "\n(The next output section is determined by your implementation.)\n\n";

	cout << "list 1: ";
	printList(intLis1);
	cout << endl;

	cout << "list 2: ";
	printList(intLis2);
	cout << endl;

	intLis3.push_back(1);
	intLis3.push_back(2);
	intLis3.push_back(3);
	cout << "list 3: ";
	printList(intLis3);
	cout << endl;

	// void assign (InputIterator first, InputIterator last);
	intLis1.assign(intLis2.begin(), intLis2.end());
	cout << "list 1 after assign: ";
	printList(intLis1);

	// void assign (size_type n, const value_type& val);
	intLis1.assign(5, 3);
	cout << "list 1 after second assign: ";
	printList(intLis1);

	// const_reference back() const;
	// (Notice that this back function returns a reference.)
	cout << "list 2 back(): " << intLis2.back();
	cout << endl;

	// void clear() noexcept;
	cout << "list 1 after clear():";
	intLis1.clear();
	printList(intLis1);

	// bool empty() const noexcept;
	cout << "list 1 empty(): " << intLis1.empty() << endl;

	// const_reference front() const;
	cout << "list 2 front(): " << intLis2.front() << endl;

	// iterator insert (const_iterator position, const value_type& val);
	// (Notice that this insert function returns an iterator.)
	intLis1.insert(intLis1.begin(), 5);
	intLis1.insert(intLis1.begin(), 4);
	intLis1.insert(intLis1.begin(), 3);
	cout << "list 1 after insert: ";
	printList(intLis1);

	// void pop_back();
	intLis1.pop_back();
	cout << "list 1 after pop_back: ";
	printList(intLis1);

	// void pop_front();
	intLis1.pop_front();
	cout << "list 1 after pop_front: ";
	printList(intLis1);

	// void push_front (const value_type& val);
	intLis1.push_front(1);
	intLis1.push_front(1);
	intLis1.push_front(2);
	cout << "list 1 after push_front: ";
	printList(intLis1);

	// void remove (const value_type& val);
	intLis1.remove(1);
	cout << "list 1 after remove: ";
	printList(intLis1);

	// void reverse() noexcept;
	intLis1.reverse();
	cout << "list 1 after reverse: ";
	printList(intLis1);

	// void splice (const_iterator position, list& x);
	intLis1.splice(intLis1.begin(), intLis3);
	cout << "list 1 after splice 1: ";
	printList(intLis1);

	// void splice (const_iterator position, list& x, const_iterator i);
	intLis1.splice(intLis1.begin(), intLis2, intLis2.begin());
	cout << "list 1 after splice 2: ";
	printList(intLis1);
	
	// void splice (const_iterator position, list& x, const_iterator first, const_iterator last);
	intLis1.splice(intLis1.begin(), intLis2, intLis2.begin(), intLis2.end());
	cout << "list 1 after splice 3: ";
	printList(intLis1);

	// void swap (list& x);
	cout << "list 1 before swap ";
	printList(intLis1);

	cout << "list 3 before swap ";
	printList(intLis3);

	intLis1.swap(intLis3);
	cout << "list 1 after swap ";
	printList(intLis1);

	
	cout << "\n\n----------------------------------------------------";

	cout  <<  endl;
	system("Pause");
	return 0;
}

// Definition function printVector
void printVector(vector<int> v1)
{
	vector<int>::iterator iter;
	for (iter = v1.begin(); iter != v1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}

// Definition function printList
void printList(list<int> l1)
{
	list<int>::iterator iter;
	for (iter = l1.begin(); iter != l1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}



