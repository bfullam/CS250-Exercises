#include "HotDogStand.h"
#include <iostream>
using namespace std;

int main()
{
	 HotDogStand s1,s2,s3;
	 s1.setID(111);
	 s2.setID(222);
	 s3.setID(333);

	 for (int i = 0; i < 56; ++i) { s1.justSold(); }
	 for (int i = 0; i < 79; ++i) { s2.justSold(); }
	 for (int i = 0; i < 121; ++i) { s3.justSold(); }
	
	cout << "Stand 1" << endl;	
	cout << "Stand ID: " << s1.getID() << endl;
	cout << "Hot dogs sold: " << s1.getStandSales() << endl;
    cout << "\nStand 2" << endl;	
	cout << "Stand ID: " << s2.getID() << endl;
	cout << "Hot dogs sold: " << s2.getStandSales() << endl;
	cout << "\nStand 3" << endl;	
	cout << "Stand ID: " << s3.getID() << endl;
	cout << "Hot dogs sold: " << s3.getStandSales() << endl;
  


	cout << "\nStand " << s1.getID() << " sold " << s1.getStandSales() << " hot dogs.";
	cout << "\nStand " << s2.getID() << " sold " << s2.getStandSales() << " hot dogs.";
	cout << "\nStand " << s3.getID() << " sold " << s3.getStandSales() << " hot dogs.";

	cout << "\n=> Total sold = " << s1.getAllSales() << " hot dogs" << endl;

	s2.~HotDogStand();

	cout << "\nStand 2 was robbed. The stand will be removed from the area."
		<< "\nTotal sales today (not including Stand 2): " 
		<< s1.getAllSales() << endl;
    
	cout << "\nStand 2 is now Stand 4 (new ID is 123)." << endl;
	HotDogStand s4;
	s4.setID(123);
	for (int i = 0; i < 34; ++i) { s4.justSold(); }
	cout << "\nStand 4" << endl;
	cout << "Stand ID: " << s4.getID() << endl;
	cout << "Hot dogs sold: " << s4.getStandSales() << endl;

	cout << "\nStand " << s1.getID() << " sold " << s1.getStandSales() << " hot dogs.";
	cout << "\nStand " << s3.getID() << " sold " << s3.getStandSales() << " hot dogs.";
	cout << "\nStand " << s4.getID() << " sold " << s4.getStandSales() << " hot dogs.";

	cout << "\n=> Total sold = " << HotDogStand::getAllSales() << " hot dogs" << endl;

	cout << endl;
	system("Pause");
	return 0;
}

