#include <iostream>
using namespace std;

// Base Class or Parent Class
class Shape
{
	int length;
	int breadth;

public:
	Shape(){}								// Default Constructor
	Shape(int len, int bre) : length(len), breadth(bre) {}
	void display()
	{
		cout << "Length: " << length << "Breadth: " << breadth << endl;
	}
	int get_length()
	{
		return length;
	}
	int get_breadth()
	{
		return breadth;
	}
};
// Derived Class or Child Class
class Cuboid : public Shape
{
	// Child's extra parameter
	int height;

public:
	// Parent class is called when child object is created. So, use parent constructor
	Cuboid(int l, int b, int h) : Shape(l, b), height(h) {}
	// Trying to initialize base class contructor generates error
	// Cuboid(int l, int b, int h)
	// {
	// 	Shape(l, b);		// Compiler can't call parent Constrcutor with parameter
	// 	height = h;
	// }
	int get_area()
	{
		// Accessing private member through public functions of Parent Class
		return (get_length() * get_breadth());
	}
	int get_volume()
	{
		// Accessing private member through public functions of Parent Class
		return (get_length() * get_breadth() * height);
	}
};
int main()
{
	Cuboid cb(10, 20, 30);
	cout << "Area of cuboid: " << cb.get_area() << endl;
	cout << "Volume of cuboid: " << cb.get_volume() << endl;
}