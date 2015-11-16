#include <iostream>
#include <string>
#include <set>		// also multiset
#include <map>		// also multimap
#include <iterator>	// to use ostream_iterator

using namespace std;

int main()
{

	/***************************************************************************
			MAPS
	***************************************************************************/
	cout << "  ***  STL MAP CLASS  ***  \n\n";

	// Use the default contructor to create a map myMap of integers and strings.


	// Create an iterator to use with the map.


	// Use the function insert (void function) and the function make_pair to 
	// insert the following items into the map:
	//	3,three
	//	4,four
	//  2,two
	//  5,five
	//  1,one




	// Use a FOR loop and the iterator to print each pair of elements in the map.
	cout << "myMap: " << endl;

	  


	cout << endl;
	// Use function empty to check if the map is empty and output an appropriate 
	// message.




	cout << endl;
	// Use function size to output the size of the map.

	


	cout << endl;
	// Use function max_size to output the size of the map.




	// Use the default contructor to create a map otherMap of integers and strings.



	
	// Use the function insert (void function) and the function make_pair to 
	// insert the following items into the map:
	//	30,thirty
	//	20,twenty
	//  10,ten




	cout << endl;
	// Use a FOR loop and the iterator to print each pair of elements in the map.
	cout << "otherMap: " << endl;




	cout << endl;
	// Use function swap to swap maps.
	cout << "Swap" << endl;




	cout << endl;
	// Use a FOR loop and the iterator to print each pair of elements in myMap.
	cout << "myMap: " << endl;




	cout << endl;
	// Use a FOR loop and the iterator to print each pair of elements in otherMap.
	cout << "otherMap: " << endl;

	


	cout << endl;
	// Use function insert (void function) to insert 111 and "ha" in myMap.




	// Use a FOR loop and the iterator to print each pair of elements in myMap.
	cout << "myMap: " << endl; 




	cout << "\n(Other functions...)\n";
	/*
		Create statements to test these four functions:

		!=
		==
		clear
		erase
	*/

	/***************************************************************************
			SETS
	***************************************************************************/

	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  STL SET CLASS  ***  \n\n";

	// Use the default constructor to create a set mySet of integers.



	
	// Use function insert (void function ) to insert 12, 10, and 11 in this order.



	// Use the default constructor to create a multiset myMultiSet of integers.


	
	// Use function insert (void function ) to insert 12, 10, 11, and 11 in this order.




	// Create an iterator and make it point to the first element in the set mySet.



	// Create an iterator and make it point to the first element in the multiset myMultiset.



	cout << "\nSet: ";
	copy(mySet.begin(), mySet.end(), screen);
	cout << endl;
	cout << "\nMultiset: ";
	copy(myMultiSet.begin(), myMultiSet.end(), screen);
	cout << endl;
	
	cout << "\n(Other functions...)\n";
	/*
		Create statements to test these five functions:

		!=
		==
		clear
		erase
		swap
	*/

	cout << "\n\n----------------------------------------------------";

	cout  <<  endl;
	system("Pause");
	return 0;
}
