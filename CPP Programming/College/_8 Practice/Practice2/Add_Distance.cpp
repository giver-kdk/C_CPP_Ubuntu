#include <iostream>
using namespace std;

class Distance
{
	int kilometer;
	int meter;
	int centimeter;
	public:
		Distance(){}
		Distance(int km) : kilometer(km)
		{
			meter = kilometer * 1000;
			centimeter = meter * 100;
		}
		Distance operator +(Distance obj)
		{
			Distance temp(kilometer + obj.kilometer);
			return temp;
		}
		void display()
		{
			cout << "Kilometer: " << kilometer << endl;
			cout << "Meter: " << meter << endl;
			cout << "Centimeter: " << centimeter << endl;
		}
};

int main()
{
	Distance d1(50), d2(30);
	Distance d3 = d1 + d2;
	d3.display();
	return 0;
}