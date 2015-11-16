#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

// Declaration function printVector.
// The function passes a vector and prints all
// the elements on one line, separated by a space.
// Use an iterator and a FOR loop.


// Declaration function printList.
// The function passes a list and prints all
// the elements on one line, separated by a space.
// Use an iterator and a FOR loop.


int main()
{

	/***************************************************************************
			VECTORS
	***************************************************************************/
	cout << "  ***  STL VECTOR CLASS  ***  \n\n";

	// Use the default constructor to declare an integer vector v1.


	// Use function push_back to insert the following values in v1: 12, 73, 41,
	// 38, 25, 56, an 63 in this order.


	// size_type size() const noexcept;
	// Create a variable of type int named sizeV1 and store the size of the vector.
	// Use function size to retrieve the size of the vector. 
	// Make sure you cast the return value of the function size to the appropriate type.
	

	// Use a FOR loop to print out the vector.
	// Do NOT use an iterator.


	//void clear() noexcept;
	// Call the function clear on vector v1.


	// size_type size() const noexcept;
	// Call function size to print the size of v1.
	

	// size_type capacity() const noexcept;
	// Call function capacity to output the capacity of v1.


	// Create an array of integers containing: 10,11,12,13,14,15,16,17,18,19
	

	// Use the default constructor to declare an integer vector v2.
	

	// void assign (InputIterator first, InputIterator last);
	// Use function assign to copy elements 12, 13, 14, 15, and 16 in v2.
	// One statement only.
	

	// Call the function printVector to print v2.


	// const_reference back() const;
	// Use the function back output the last element in the vector
	// (Notice that this back function returns a reference.)
	
		
	// Use the default constructor to declare an integer vector v3.


	// void assign (size_type n, const value_type& val);
	// Use function assign to insert the values 7, 7, 7, 7, and 7.
	// One statement only.


	// Call the function printVector  to print v3.
	

	//const_reference at(size_type n) const;
	// Use function at to replace the middle element with 100.
	// (Notice that this at function returns a reference.)


	// Call the function printVector to print v3.
	

	// vector (const vector& x);
	// Use the copy constructor to create a new vector v4 with the 
	// same elements of v3.


	// Call the function printVector to print v4.


	// Create an iterator iterVector4 to point to the first element of v4.


	// Create an iterator iterVector2 to point to the second element of v2.
	

	// void insert (iterator position, InputIterator first, InputIterator last);
	// Use function insert to insert the second, third, and fourth element
	// of v2 as the first, second, and third element of v4.
	

	// Call the function printVector to print v4.


	// Use the function insert to insert three 0s at the end of v4.
	

	// void insert (iterator position, size_type n, const value_type& val);
	// Call the function printVector to print v4.


	// bool empty() const noexcept;
	// const_reference back() const;
	// void pop_back();
	// Use a WHILE loop to remove and output each element of v2 backwards.
	// Use function empty for the loop condition, function back to output 
	// the last element, and function pop_back to remove elements.
	// (Notice that this back function returns a reference.)


	// void resize (size_type n, const value_type& val);
	// Use function resize to insert three times number 4 in v2.


	// Call the function printVector to print v2.


	// const_reference front() const;
	// Use function front to output the first element in v4.
	// (Notice that this front function returns a reference.)


	// void swap (vector& x);
	// Use function swap to swap v2 with v4.


	// Call the function printVector to print v2.


	// Create a new vector v5;


	// Use the overloaded assignment operator to copy all the elements of v2
	// into v5.


	// void resize (size_type n);
	// size_type size() const noexcept;
	// Delete the last element of v2 by using the functions resize and size


	// Call the function printVector to print v5.
	

	// Create an iterator iterVector5 to point to the first element of v5.


	// iterator erase (const_iterator first, const_iterator last);
	// size_type size() const noexcept;
	// Call the function erase to delete the second half of v5.
	// Use function size to get the range.
	// (Notice that this erase function returns an iterator.)


	// Call the function printVector to print v5 again.


	// iterator erase (const_iterator position);
	// Call the function erase to delete the first element of the vector.
	// (Notice that this erase function returns an iterator.)


	// Call the function printVector to print v5 again.



	/***************************************************************************
			LISTS
	***************************************************************************/

	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  STL LIST CLASS  ***  \n\n\n";

	// Use the default constructor to create three lists of integers, intLis1,
	// intList2, and intList3.
	        

	// void push_back (const value_type& val);
	// Use the function push_back to insert the following values in the first list: 
	// 23 58 58 58 36 15 15 93 98 58
	

	// Call function printList to print intList1.


	//Using the overloaded assignment operator, copy elements of intList1 and intList2.
    

	// Call function printList to print intList1.
	

	// void unique();
	//Remove all consecutive duplicates in the first list (browse the list of 
	//  functions in cplusplus.com to figure out which function you need to use).
	// --> This is only ONE statement.
 

	// Call function printList to print intList1.
	

	// void sort();
	//Sort all elements in the second list (browse the list of 
	//  functions in cplusplus.com to figure out which function you 
	//  need to use).
	// --> This is ONE statement only.


	// Call function printList to print intList2.

			
	// void push_back (const value_type& val);
	//Insert the following elements in the third list:
	//  13 23 25 136 198


	// Call function printList to print intList3.


	// void merge (list& x);
	//Add to the second list all elements of the third list(browse the  
	//  list of functions in cplusplus.com to figure out which function  
	//  you need to use).
	// --> This is ONE statement only.


	// Call function printList to print intList2.



	// Create statements using the functions below.
	// Is the output what you expected?

	cout << "\n(The next output section is determined by your implementation.)\n\n";

	// void assign (InputIterator first, InputIterator last);

	// void assign (size_type n, const value_type& val);

	// const_reference back() const;
	// (Notice that this back function returns a reference.)

	// void clear() noexcept;

	// bool empty() const noexcept;

	// const_reference front() const;

	// iterator insert (const_iterator position, const value_type& val);
	// (Notice that this insert function returns an iterator.)

	// void pop_back();

	// void pop_front();

	// void push_front (const value_type& val);

	// void remove (const value_type& val);

	// void reverse() noexcept;

	// void splice (const_iterator position, list& x);

	// void splice (const_iterator position, list& x, const_iterator i);
	
	// void splice (const_iterator position, list& x, const_iterator first, const_iterator last);

	// void swap (list& x);

	
	cout << "\n\n----------------------------------------------------";

	cout  <<  endl;
	system("Pause");
	return 0;
}

// Definition function printVector


// Definition function printList



