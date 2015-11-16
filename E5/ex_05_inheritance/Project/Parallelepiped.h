#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Rectangle.h"

// Class definition that inherits from the Rectangle class
class Parallelepiped : public Rectangle
{
public:
	//Default constructor
	Parallelepiped();
	//Overloaded constructor with three parameters: width, length, height.
	Parallelepiped(double width, double length, double height);
	//Function getHeight
	double getHeight() const;
	//Function setHeight
	void setHeight(double height);
	//Function setDimensions
	void setDimensions(double width, double length, double height);
	//Function calculateVolume
	double calculateVolume() const;
	//Function print
	void print() const;
	//Destructor
	~Parallelepiped();
private:
	double height;	//This is the ONLY member variable in this class.
};

#endif


