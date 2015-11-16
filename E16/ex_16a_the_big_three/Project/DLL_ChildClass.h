#ifndef DLL_CHILDCLASS_H
#define DLL_CHILDCLASS_H

#include "DoublyList.h"

class DLL_ChildClass : public DoublyList
{
public:
	DLL_ChildClass(){}
	~DLL_ChildClass(){}

	// Declaration of copy constructor
	DLL_ChildClass(const DLL_ChildClass&);

	// Declaration of overloaded assignment operator
	DLL_ChildClass* operator=(const DLL_ChildClass&);


};

#endif
