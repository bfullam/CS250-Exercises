/*************************************************************
	This program defines a class for storing integers
	and overloads the [] operator to access the ith digit.

*************************************************************/

#include "MyInteger.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	MyInteger num(n);

	cout << "\nEnter an index (-1 to quit): ";
	int i;
	cin >> i;
	while (i != -1)
	{
		if(i >= num.intLength())
			cout << "Out of array bounds.\n";
		else if (i < 0)
			cout << "There are not negative indices.\n";
		else
		{
			cout << "Digit at index " << i
				<< " is " << num[i] << endl;
		}
		cout << "\nEnter an index (-1 to quit): ";
		cin >> i;
	}

	cout << endl;
	system("Pause");
	return 0;
}

