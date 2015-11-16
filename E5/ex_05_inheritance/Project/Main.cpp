#include "Parallelepiped.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	Parallelepiped p1(3.0, 2.5, 4.5);
	Parallelepiped p2;

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "***** Parallelepiped 1 *****\n" << endl;
	p1.print();
	cout << endl;

	p2.setWidth(6.0);
	p2.setLength(7.5);
	p2.setHeight(8.5);

	cout << "***** Parallelepiped 2 *****\n" << endl;
	p2.print();
	cout << endl;

	double w = 0.0,
		l = 0.0,
		h = 0.0;

	cout << "***** Parallelepiped 3 *****\n" << endl;	
	
	Parallelepiped p3;

	cout << "Enter the width: ";
	cin >> w;
	cout << "Enter the length: ";
	cin >> l;
	cout << "Enter the height: ";
	cin >> h;
	cout << endl;

	p3.setDimensions(w, l, h);
	
	p3.print();
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}
