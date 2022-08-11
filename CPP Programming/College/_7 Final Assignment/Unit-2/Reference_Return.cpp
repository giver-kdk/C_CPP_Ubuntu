// Returning by reference from a function as a parameter
#include <iostream>
using namespace std;
// global variable
int x = 5, y = 15; 
int &setx();

int main()
{
	setx() = y;		// Equivalent to x = y;
	cout << "x=" << x << endl;
	return 0;
}
int &setx()
{
	cout << "x=" << x << endl;
	return x;
}