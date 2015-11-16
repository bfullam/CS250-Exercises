#include "DArray.h"

template <typename T>
DArray<T>::DArray( )
{
    capacity = 50;
	a = new T[capacity];	
	used = 0;
}

template <typename T>
DArray<T>::DArray(int Capacity)
{
	capacity = Capacity;
    a = new T[capacity];
	used = 0;	 
}

template <typename T>
void DArray<T>::addElement(const T& element)
{
    if (used >= capacity)
    {
        cerr << "Attempt to exceed capacity in DArray.\n";
        exit(0); 
    }
    a[used] = element;
    ++used;
}

template <typename T>
DArray<T>::~DArray()
{
    delete [] a; //delete the array
	a = NULL;	 //null the pointer
}

template <typename T>
bool DArray<T>::full() const
{
	return (used == capacity);
}

template <typename T>
int DArray<T>::getCapacity() const
{
	return capacity;
}

template <typename T>
int DArray<T>::getNumberUsed() const
{
	return used;
}

template <typename T>
void DArray<T>::emptyArray()
{
	delete a;
}

template <typename T>
const T& DArray<T>::getElementAt(int index) const
{
	return a[index];
}
