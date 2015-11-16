#include "Rectangle.h"

//Default constructor
Rectangle::Rectangle()
{
	width = 0;
	length = 0;
}
//Overloaded constructor with two parameters for width and height values.
Rectangle::Rectangle(double width, double length)
{
	this->width = width;
	this->length = length;
}
//Function getWidth
double Rectangle::getWidth() const
{
	return width;
}
//Function getLength
double Rectangle::getLength() const
{
	return length;
}

//Function setWidth
void Rectangle::setWidth(double width)
{
	this->width = width;
}

//Function setLength
void Rectangle::setLength(double length)
{
	this->length = length;
}
//Function calculatePerimeter
double Rectangle::calculatePerimeter() const
{
	return 2 * length + 2 * width;
}

//Function calculateArea
double Rectangle::calculateArea() const
{
	return length * width;
}
//Function print
void Rectangle::print() const
{
	cout << "Width = " << width
		<< "\nLength = " << length << endl;
}
//Destructor
Rectangle::~Rectangle()
{}
