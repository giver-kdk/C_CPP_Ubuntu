// Program to demonstrate the virtual function used with the concept of Inheritance
#include <iostream>
using namespace std;

class Shape
{
	// 'protected:' allows inheritance
protected:
	int length;
	int breadth;

public:
	Shape() {}
	Shape(int l, int b) : length(l), breadth(b) {}
	// Creating virtual function in Parent Class
	virtual void area()
	{
		cout << "Function is Undefined!!!" << endl;
	}
	// virtual void area() = 0;					// Pure Virtual Function makes a class Abstract
};

class Rectangle : public Shape
{
public:
	Rectangle(int l, int b) : Shape(l, b) {}
	void area()
	{
		cout << "Area: " << length * breadth << endl;
	}
};
int main()
{
	Shape *obj;
	Rectangle r1(5, 10);
	// Parent class pointer object points to Child class object
	obj = &r1;
	// r1.area();
	// Access the area() function of the object pointed by 'obj'
	obj->area();
	/* NOTE: If 'virtual' keyword removed from above virtual function then, area() function
	of the Parent('Shape') class is called */

	// NOTE: Pure virtual funtion in Parent Class creates error
	Shape ob(10, 20);
	return 0;
}