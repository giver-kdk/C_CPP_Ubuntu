// Program demonstrating use of copy constructor
#include <iostream>
using namespace std;

class Number
{
	private:
		int num;
	public:
		Number()
		{
			cout << "Constructor Called" << endl;
			num = 0;
		}
		Number(int n)
		{
			cout << "Parameterized Constructor Called" << endl;
			num = n;
		}
		// Copy constructor uses reference of object to copy the object of the exact address
		Number(Number &obj)				// 'obj' is just object name. It can be anything else
		{
			cout << "Copy Constructor Called" << endl;
			num = obj.num;				// Data copied to calling object
		}
		void get()
		{
			cout << "Value in object: " << num << endl;
		}
};

int main()
{
	Number n1;					// Normally calls constructor
	n1.get();

	Number n2(5);				// Parameterized constructor called
	n2.get();

	Number n3(2);
	n3.get();
	// Copy constructor called
	Number n4(n2);				// Exact value of 'n2' copied to 'n4'
	n4.get();

	// Copy constructor called since 'n5' object is being created
	Number n5 = n3;				// Exact value of 'n3' copied to 'n5'
	n5.get();

	Number n6;
	// Copy contructor is not called since 'n6' object already created
	n6 = n3;					// Value of 'n3' copied to 'n6'
	n6.get();
	return 0;
}