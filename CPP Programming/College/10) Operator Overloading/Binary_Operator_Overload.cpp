// Program to demonstrate operator overloading in binary operator
#include <iostream>
using namespace std;

class Point
{
	int value;

public:
	Point() {} // Default Constructor for Non-Parametric Initialization
	Point(int i) : value(i) {}				// Assign value of 'i' to 'value'
	int get_value();
	void operator++();
	void operator++(int);
	Point operator+(const Point &obj);
};
int main()
{
	Point p1(4);
	cout << "The value of the point is: " << p1.get_value() << endl;
	// p1.operator ++();	// Calling operator function
	// Incrementing an object is only allowed when '++' is oveloaded operator function
	// ++p1; // Calling pre-increment operator function
	// p1++; // Calling post-increment operator function
	// p1.operator ++(5);		// Calling post-increment operator function
	cout << "The incremented value of the point is: " << p1.get_value() << endl;

	Point p2(5), p3(10), p4;
	p4 = p2 + p3;
	cout << "Value 1: " << p2.get_value() << endl;
	cout << "Value 2: " << p3.get_value() << endl;
	cout << "Sum of Value 1 and Value 2: " << p4.get_value() << endl;
	return 0;
}
int Point ::get_value()
{
	return value;
}
void Point ::operator++() // Operator overloading pre-increment ( i.e; ++i )
{
	++value;
}
void Point ::operator++(int) // Operator overloading post-increment ( i.e; ++i )
{
	value++;
}
Point Point:: operator+(const Point &obj)
{
	Point temp;
	temp.value = value + obj.value;
	// Returned object contains the result value with it
	return temp;
}