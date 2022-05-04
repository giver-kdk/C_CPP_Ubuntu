// Program to demonstrate data conversion from one basic data type to another basic data type
#include <iostream>
using namespace std;

int main()
{
	// ****************************Implicit Typecasing**********************************
	// Lower to Higher data conversion
	int a = 10;
	float b;
	b = a;							// Automatic data conversion of 'int' to 'float' by compiler
	cout << "a: " << a << "\t\t" << "b: " << b << endl;
	// Higher to lower data conversion
	float x = 10.56;
	int y;
	y = x;						
	cout << "x: " << x << "\t" << "y: " << y << endl;	
	return 0;
}