#include <iostream>
using namespace std;

class Distance
{
	int kilometer;
	int meter;
	public:
		Distance(){}
		Distance(int km)
		{
			kilometer = km;
			meter = kilometer * 1000;
		}
		void display()
		{
			cout << "Kilometer: " << kilometer << endl;
			cout << "Meter: " << meter << endl;
		}
};

int main()
{
	int value = 50;
	Distance d1 = value;
	d1.display();
	return 0;
}