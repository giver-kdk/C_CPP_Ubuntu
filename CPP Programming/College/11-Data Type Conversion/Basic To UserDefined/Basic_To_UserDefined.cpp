// Program to demonstrate data conversion of one basic data type to another user-defined data type
#include <iostream>
using namespace std;

class Distance
{
	int centimeter;
	double meter;
	public:
		Distance()
		{
			centimeter = -1;
			meter = -1;
		}
		Distance(int cm):centimeter(cm)
		{
			meter = float(centimeter) / 100;
		}
		void display()
		{
			cout << centimeter << "cm" << " = " << meter << "m" << endl;
		}
};

int main()
{
	Distance d1 = 170;				// Calling copy constructor
	d1.display();
	return 0;
}