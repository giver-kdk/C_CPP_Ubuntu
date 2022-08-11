// Program to convert data from userdefined to userdefined
#include <iostream>
using namespace std;

class Kilogram
{
	public:
		int value;
		Kilogram(int k) : value(k){}
		void display()
		{
			cout << "Weight in Kilogram: " << value << endl;
		}
};
class Gram
{
	int measure;
	public:
		Gram(int g) : measure(g){}
		void show()
		{
			cout << "Weight in Gram: " << measure << endl;
		}
		Gram(Kilogram obj)
		{
			measure = obj.value * 1000;
		}
};
int main()
{
	Kilogram mass(5);
	Gram object = mass;
	mass.display();
	object.show();
	return 0;
}