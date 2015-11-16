#ifndef HOTDOGSTAND_H
#define HOTDOGSTAND_H

using namespace std;

class HotDogStand
{
public:
	HotDogStand();
	void setID(int set);
	int getID() const;
	int getStandSales() const;
	void justSold();
	static int getAllSales();
	~HotDogStand();


	int numSold;
	int id;

private:
	static int totalSold;
		
};

#endif // !HOTDOGSTAND_H
