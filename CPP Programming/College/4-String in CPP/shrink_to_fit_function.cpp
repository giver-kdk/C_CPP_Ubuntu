// Program to demostrate use of shrink_to_fit function 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Your name is: " << name << endl;
	// 'string' variables actually has additional memory space for future reference
	// 'shrink_to_fit()' shrinks capacity to actual length of string
	cout << "String capacity before shrinking: " << name.capacity() << endl;
	name.shrink_to_fit();
	cout << "String capacity after shrinking: " << name.capacity() << endl;
	return 0;
}