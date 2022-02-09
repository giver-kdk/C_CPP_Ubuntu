#include <iostream>
using namespace std;

int a = 5;		// Only Global variable should be returned by reference
// Returning local variable may cause bugs

int &changeTo() // Function with return type 'integer reference'
{
	return a;	// Return reference of 'a' ( i.e; pointer to 'a')
}

int main()
{
	cout << "Value of a: " << a << endl;
	// Assign value to reference of 'a'
	changeTo() = 10;					// Equivalent to a = 10;
	cout << "Value of a: " << a << endl;
	return 0;
}