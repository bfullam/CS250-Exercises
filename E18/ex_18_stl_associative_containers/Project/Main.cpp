/*
	Fullam, Bryan
	CS A250
	November 16, 2015

	Exercise 18
*/


#include <iostream>
#include <string>
#include <set>		// also multiset
#include <map>		// also multimap
#include <iterator>	// to use ostream_iterator
#include <utility>

using namespace std;

int main()
{

	/***************************************************************************
			MAPS
	***************************************************************************/
	cout << "  ***  STL MAP CLASS  ***  \n\n";

	// Use the default contructor to create a map myMap of integers and strings.
	map<int,string>myMap;

	// Create an iterator to use with the map.
	map<int,string>::iterator iter;


	// Use the function insert (void function) and the function make_pair to 
	// insert the following items into the map:
	//	3,three
	//	4,four
	//  2,two
	//  5,five
	//  1,one
	myMap.insert(pair<int, string>(3, "three"));
	myMap.insert(pair<int, string>(4, "four"));
	myMap.insert(pair<int, string>(2, "two"));
	myMap.insert(pair<int, string>(5, "five"));
	myMap.insert(pair<int, string>(1, "one"));




	// Use a FOR loop and the iterator to print each pair of elements in the map.
	cout << "myMap: " << endl;
	for (iter = myMap.begin(); iter != myMap.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	  


	cout << endl;
	// Use function empty to check if the map is empty and output an appropriate 
	// message.
	if (myMap.empty())
		cout << "myMap is empty" << endl;
	else
		cout << "myMap is not empty" << endl;



	cout << endl;
	// Use function size to output the size of the map.
	cout << "size of myMap: " << myMap.size() << endl;
	


	cout << endl;
	// Use function max_size to output the size of the map.
	cout << "max_size of myMap: " << myMap.max_size() << endl;



	// Use the default contructor to create a map otherMap of integers and strings.
	map<int, string> otherMap;


	
	// Use the function insert (void function) and the function make_pair to 
	// insert the following items into the map:
	//	30,thirty
	//	20,twenty
	//  10,ten
	otherMap.insert(pair<int, string>(30, "thrity"));
	otherMap.insert(pair<int, string>(20, "twenty"));
	otherMap.insert(pair<int, string>(10, "ten"));



	cout << endl;
	// Use a FOR loop and the iterator to print each pair of elements in the map.
	cout << "otherMap: " << endl;
	for (iter = otherMap.begin(); iter != otherMap.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}



	cout << endl;
	// Use function swap to swap maps.
	cout << "Swap" << endl;
	myMap.swap(otherMap);



	cout << endl;
	// Use a FOR loop and the iterator to print each pair of elements in myMap.
	cout << "myMap: " << endl;
	for (iter = myMap.begin(); iter != myMap.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}



	cout << endl;
	// Use a FOR loop and the iterator to print each pair of elements in otherMap.
	cout << "otherMap: " << endl;
	for (iter = otherMap.begin(); iter != otherMap.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	


	cout << endl;
	// Use function insert (void function) to insert 111 and "ha" in myMap.
	myMap.insert(pair<int, string>(111, "ha"));



	// Use a FOR loop and the iterator to print each pair of elements in myMap.
	cout << "myMap: " << endl; 
	for (iter = myMap.begin(); iter != myMap.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}



	cout << "\n(Other functions...)\n" << endl;
	
		//Create statements to test these four functions:

		//!=
	cout << "testing != : " << (myMap != otherMap) << endl;
	cout << endl;

		//==
	cout << "testing == : " << (myMap == otherMap) << endl;
	cout << endl;

		//clear
	myMap.clear();
	cout << "myMap after clear(): " << endl;
	for (iter = myMap.begin(); iter != myMap.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;
		//erase
	otherMap.erase(otherMap.begin());
	cout << "otherMap after erase(): " << endl;
	for (iter = otherMap.begin(); iter != otherMap.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	

	/***************************************************************************
			SETS
	***************************************************************************/

	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  STL SET CLASS  ***  \n\n";

	// Use the default constructor to create a set mySet of integers.
	set<int> mySet;


	
	// Use function insert (void function ) to insert 12, 10, and 11 in this order.
	mySet.insert(12);
	mySet.insert(10);
	mySet.insert(11);


	// Use the default constructor to create a multiset myMultiSet of integers.
	multiset<int> myMultiSet;

	
	// Use function insert (void function ) to insert 12, 10, 11, and 11 in this order.
	myMultiSet.insert(12);
	myMultiSet.insert(10);
	myMultiSet.insert(11);
	myMultiSet.insert(11);



	// Create an iterator and make it point to the first element in the set mySet.
	set<int>::iterator mySetIter = mySet.begin();


	// Create an iterator and make it point to the first element in the multiset myMultiset.
	multiset<int>::iterator myMultiSetIterator = myMultiSet.begin();


	cout << "\nSet: ";
	copy(mySet.begin(), mySet.end(), screen);
	cout << endl;
	cout << "\nMultiset: ";
	copy(myMultiSet.begin(), myMultiSet.end(), screen);
	cout << endl;
	
	cout << "\n(Other functions...)\n" << endl;
	
		//Create statements to test these five functions:

		//!=
	set<int> otherSet;
	otherSet.insert(10);
	cout << "Testing inequality on sets: " << (mySet != otherSet) << endl;

	multiset<int> otherMultiSet;
	otherMultiSet.insert(10);
	cout << "Testing inequality on Multisets: " << (myMultiSet != otherMultiSet) << endl;

	cout << endl;
		//==
	cout << "Testing equality on sets: " << (mySet == otherSet) << endl;

	cout << "Testing equality on Multisets: " << (myMultiSet == otherMultiSet) << endl;

	cout << endl;
		//clear
	mySet.clear();
	cout << "mySet after clear: " << endl;
	copy(mySet.begin(), mySet.end(), screen);

		//erase
	myMultiSet.erase(myMultiSet.begin());
	cout << "myMultiSet after erase: " << endl;
	copy(myMultiSet.begin(), myMultiSet.end(), screen);

	cout << endl;
		//swap
	//mySet.swap(myMultiSet);

	cout << "\n\n----------------------------------------------------";

	cout  <<  endl;
	system("Pause");
	return 0;
}
