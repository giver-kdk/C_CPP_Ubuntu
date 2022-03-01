#include <iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout << "Base Class constructor gets called" << endl;
		}
		~A()
		{
			cout << "Base Class destructor gets called" << endl;
		}
};
class B : public A
{
	public:
		B()
		{
			cout << "Derived Class constructor gets called" << endl;
		}
		~B()
		{
			cout << "Derived Class destructor gets called" << endl;
		}
};

int main()
{
	cout << "Creating base class object..." << endl << endl;
	A obj1;
	cout << "Creating derived class object..." << endl << endl;
	B obj2;
	cout << "Destroying everything..." << endl << endl;
	return 0;
}