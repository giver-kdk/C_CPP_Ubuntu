// Returning by reference from a function as a parameter
#include <iostream>
using namespace std;
// global variable
int x = 5, y = 15; 
// We should not return local variables by reference. It causes security bugs
int &setx();

int main()
{
	// assign value of y to the variable returned by the function
	setx() = y;		// Equivalent to x = y;
	cout << "x=" << x << endl;
	return 0;
}
int &setx()
{
	// display global value of x
	cout << "x=" << x << endl;
	return x;
}