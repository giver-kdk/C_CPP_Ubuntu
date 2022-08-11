// Program to demonstrate data conversion of basic to user defined data type
#include <iostream>
using namespace std;

class Weight
{
	int kilogram;
	int gram;
	public:
		Weight(int kg) : kilogram(kg) 
		{
			gram = kilogram * 1000;
		}
		void display()
		{
			cout << "Weight in Kg: " << kilogram << endl;
			cout << "Weight in gm: " << gram << endl;
		}
};

int main()
{
	int wt = 4;
	Weight mass = wt;
	mass.display();
	return 0;
}