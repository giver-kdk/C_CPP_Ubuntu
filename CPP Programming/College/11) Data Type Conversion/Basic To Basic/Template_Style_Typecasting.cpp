// Program to demonstrate data conversion using template style typecasting
#include <iostream>
using namespace std;

int main()
{
	// Lower to Higher data conversion
	int a = 10;
	float b;
	b = static_cast<float>(a);							// Template style data conversion of 'int' to 'float'
	cout << "a: " << a << "\t\t" << "b: " << b << endl;
	// Higher to lower data conversion
	float x = 10.56;
	int y;
	// 'static_cast' is a template
	y = static_cast<int>(x);							// Template style data conversion of 'float' to 'int'
	cout << "x: " << x << "\t" << "y: " << y << endl;	
	return 0;
}