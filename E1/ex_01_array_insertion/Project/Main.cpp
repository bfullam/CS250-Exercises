/*	Fullam, Bryan
	CS A250
	August 29, 2015

	Project 1

*/

#include <string>
#include <iostream>
using namespace std;

const int CAPACITY = 20;

//Declaration function fillArray
void fillArray(int array[], int& size);

//Declaration function printArray
void printArray(const int array[], int& size);

//Declaration function insertAtIndex
void insertAtIndex(int array[], int& size, int& element, const int index);

int main()
{
	int numArray[CAPACITY], numOfElements;

	fillArray(numArray, numOfElements);

	cout << "\nArray elements: ";
	printArray(numArray, numOfElements);

	char repeat = 'y';
	int number = 0;
	int index = 0;

	cout << "\n\nTEST insertAtIndex ----------------------------\n";
	while (repeat == 'y')
	{
		cout << "\nEnter a number to insert: ";
		cin >> number;
		cout << "Enter the index where to place the number: ";
		cin >> index;
		insertAtIndex(numArray,numOfElements,number,index);

		cout << "\nArray is now: ";
		printArray(numArray, numOfElements);

		cout << "\n\nAgain (y/n)? ";
		cin >> repeat;
	}

	cout << endl;
	system("Pause");
	return 0;
}

//Definition function fillArray
void fillArray(int array[], int& size)
{
	int temp = 0;
	size = 0;

	cout << "Please enter no more than 20 positive integers, then type a negative integer when done." << endl;

	do
	{
		
		cin >> temp;
		array[size] = temp;
		size++;
	} while (size <= CAPACITY && temp > 0);

	size -= 1;
}

//Definition function printArray
void printArray(const int array[], int& size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

//Definition function insertAtIndex
void insertAtIndex(int array[], int& size, int& element, const int index)
{
	if (size >= CAPACITY)
	{
		cerr << "Array is full. Cannot insert another element." << endl;
	}
	else if (index > CAPACITY || index < 0)
	{
		cerr << "The array cannot have more than " << CAPACITY << ", or less than 0 elements." << endl;
	}
	else if (index > size)
	{
		cerr << "You can only insert contiguous elements in the array." << endl;
	}
	else
	{
		int temp = array[index];
		array[index] = element;
		for (int i = index + 1; i < CAPACITY; i++)
		{
			array[i] = temp;
			temp = array[i + 1];
		}
	}
}
