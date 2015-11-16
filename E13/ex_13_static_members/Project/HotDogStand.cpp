/*
Fullam, Bryan
CS A250
October 27, 2015

Exercise 13
*/

#include "HotDogStand.h"

int HotDogStand::totalSold = 0;

HotDogStand::HotDogStand()
{
	numSold = 0;
	id = 0;
}

void HotDogStand::setID(int set)
{
	id = set;
}

int HotDogStand::getID() const
{
	return id;
}

int HotDogStand::getStandSales() const
{
	return numSold;
}

void HotDogStand::justSold()
{
	numSold++;
	totalSold++;
}

int HotDogStand::getAllSales()
{
	return totalSold;
}

HotDogStand::~HotDogStand()
{
	totalSold -= numSold;
}

