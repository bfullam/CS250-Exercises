#include "MyInteger.h"
#include <iostream>

MyInteger::MyInteger()
{
	myInt = 0;
}

MyInteger::MyInteger(int num)
{
	myInt = num;
}

int MyInteger::getInt() const
{
	return myInt;
}

void MyInteger::setInt(int newInt)
{
	myInt = newInt;
}

int MyInteger::intLength() const
{
	int num = myInt, count = 0;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return count;
}

int MyInteger::operator[](int index) const
{
	if (index < -1)
	{
		cerr << "There are no negative indices" << endl;
		return -1;
	}
	else
	{
		int num = myInt;
		for (int i = 1; i < intLength() - index; i++)
		{
			num /= 10;
		}
		num %= 10;
		return num;
	}
}