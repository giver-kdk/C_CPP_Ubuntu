// Program to convert object of one distance class to another distance class with data member feet and inch.
// (Assume 1m = 3.3 feet and 1cm =  0.4 inch)
#include <iostream>
using namespace std;

class Unit1
{
	double meter;
	double centimeter;
	public:
		Unit1(){}
		Unit1(double m) : meter(m)
		{
			centimeter = m * 100;
		}
		double get_meter()
		{
			return meter;
		}
		double get_centimeter()
		{
			return centimeter;
		}
		void display()
		{
			cout << "Meter:  " << meter << "m" << endl;
			cout << "Centimeter: " << centimeter << "cm" << endl;
		}
};
class Unit2
{
	double feet;
	double inch;
	public:
		Unit2(){}
		Unit2(double f)
		{
			feet = f;
			inch = f / 12;
		}
		Unit2(Unit1 obj)
		{
			feet = (obj.get_meter()) * 3.3;
			inch = (obj.get_centimeter()) * 0.4;
		}
		void display()
		{
			cout << "Feet:  " << feet << "ft" << endl;
			cout << "Inch: " << inch << "in" << endl;
		}
};

int main()
{
	Unit1 dis1(1);
	Unit2 dis2;
	dis2 = dis1;
	dis1.display();
	dis2.display();
	return 0;
}