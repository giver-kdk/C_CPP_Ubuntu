// Program using objects as function arguments and passing them.
#include <iostream>
using namespace std;

class Complex
{
	private:
		int a;
		int b;
	public:
		void set_data();
		void get_data();
		void add_data(Complex x, Complex y);
};

void Complex :: set_data()
{
	cout << "Enter the value of a and b: ";
	cin >> a >> b;
}
void Complex :: get_data()
{
	cout << "Complex Number is: " << a << " + i." << b << endl;
}
// Passing object as function argument
void Complex :: add_data(Complex x, Complex y)		// Objects of any class can be passed
{
	// Accessing data members of passed objects 
	a = x.a + y.a;				
	b = x.b + y.b;
}

int main()
{
	Complex c1, c2, c3;
	c1.set_data();					// User input 
	c1.get_data();

	c2.set_data();					// User input
	c2.get_data();

	c3.add_data(c1, c2);			// Set value by accessing data member of above objects
	cout << "After Adding..." << endl;
	c3.get_data();
	return 0;
}