#ifndef MYINTEGER_H
#define MYINTEGER_H

using namespace std;

class MyInteger
{
public:
	MyInteger();
	MyInteger(int num);
	int getInt() const;
	void setInt(int newInt);
	int intLength() const;
	int operator[](int index) const;

private:
	int myInt;

};

#endif