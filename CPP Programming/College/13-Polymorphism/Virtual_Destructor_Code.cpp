// Program to demonstrate the concept of virtual destructor
#include <iostream>

using namespace std;

class Parent
{
public:
	Parent()
	{
		cout << "Parent costructor is called" << endl;
	}
	// Creating a virtual destructor  in Parent Class
	virtual ~Parent()
	{
		cout << "Parent destructor is called" << endl;
	}
};

class Child : public Parent
{
public:
	Child()
	{
		cout << "Child constructor is called" << endl;
	}
	~Child()
	{
		cout << "Child destructor is called" << endl;
	}
};
int main()
{
	// Parent pointer pointing to child object
	Parent *ptr = new Child;

	// Method 2:
	// Parent *ptr;
	// Child *obj = new Child;
	// ptr = obj;

	// Method 3:
	// Child obj;
	// ptr = &obj;
	delete ptr;
	return 0;
}