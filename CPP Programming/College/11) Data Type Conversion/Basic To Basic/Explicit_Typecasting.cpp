// Program to demonstrate data conversion from one basic data type to another basic data type
#include <iostream>
using namespace std;

int main()
{
	// ****************************Explicit Typecasing**********************************
	// Lower to Higher data conversion
	int a = 10;
	float b;
	b = (float)a;							// Forceful data conversion of 'int' to 'float'
	cout << "a: " << a << "\t\t" << "b: " << b << endl;
	// Higher to lower data conversion
	float x = 10.56;
	int y;
	y = (int)x;						
	cout << "x: " << x << "\t" << "y: " << y << endl;
	// Lower to Higher data conversion
	char ch = 'a';
	int c;
	c = (int)ch;							// Character converted into ASCII value integer
	cout << "ch: " << ch << "\t\t" << "c: " << c << endl;
	// Higher to lower data conversion
	int p = 65;
	char q;
	q = (char)p;							// Integer taken as ASCII value for character
	cout << "p: " << p << "\t\t" << "q: " << q << endl;
	return 0;
}