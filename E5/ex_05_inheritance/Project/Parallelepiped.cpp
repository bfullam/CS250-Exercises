/*
Fullam, Bryan
CS A250
September 22, 2015

Exercise 5
*/

#include "Parallelepiped.h"

//Default constructor
Parallelepiped::Parallelepiped()
{
	height = 0;
}

//Overloaded constructor 
Parallelepiped::Parallelepiped(double width, double length, double height)
{
	this->height = height;
	setWidth(width);
	setLength(length);
}

//Function getHeight
double Parallelepiped::getHeight() const
{
	return height;
}

//Function setHeight
void Parallelepiped::setHeight(double height)
{
	this->height = height;
}

//Function setDimensions
void Parallelepiped::setDimensions(double width, double length, double height)
{
	this->height = height;
	setWidth(width);
	setLength(length);
}

//Function calculateVolume
double Parallelepiped::calculateVolume() const
{
	return height * getWidth() * getLength();
}

//Function print
void Parallelepiped::print() const
{
	Rectangle::print();

	cout << "\nBase area: " << calculateArea()
		<< "\nBase Perimeter: " << calculatePerimeter()
		<< "\nParallelepiped Height: " << getHeight()
		<< "\nParallelepiped volume: " << calculateVolume() << endl;
}

//Destructor
Parallelepiped::~Parallelepiped()
{}

