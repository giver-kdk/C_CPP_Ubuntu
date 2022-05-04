// Program to covert data from userdefined to basic data type
#include <iostream>
using namespace std;

class Weight
{
	int kilo;
	public:
		Weight(int k) : kilo(k){}
		operator int()
		{
			int gram = kilo * 1000;
			return gram;
		}
		void display()
		{
			cout << "Weight in Kilogram: " << kilo << endl;
		}
};

int main()
{
	Weight mass(5);
	int wt = mass;
	mass.display();
	cout << "Weight in gram: " << wt << endl;
	return 0;
}