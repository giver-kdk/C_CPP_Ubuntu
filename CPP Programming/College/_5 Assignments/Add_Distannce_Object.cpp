// Program to add two objects of distance class using member function and friend function
#include <iostream>
using namespace std;

class Distance
{
	double feet;
	double inch;
	public:
		Distance(){}
		Distance(double f) : feet(f)
		{
			inch = f / 12;
		}
		// '+' Operator overloading 
		Distance operator+(Distance obj)
		{
			Distance result;
			// Add current class's object's member with parameter class's object's member
			result.feet = this->feet + obj.feet;
			result.inch = this->inch + obj.inch;
			return result;
		}
		friend void display(Distance d);
};
void display(Distance d)
{
	cout << "Feet: " << d.feet << endl;
	cout << "Inch: " << d.inch << endl;
}

int main()
{
	Distance d1(5.5), d2(12.5);
	Distance sum;
	sum = d1 + d2;
	cout << "Distance 1: " << endl;
	// Display info using friend function
	display(d1);
	cout << "Distance 2: " << endl;
	display(d2);
	cout << "Sum of distances: " << endl;
	display(sum);
	return 0;
}