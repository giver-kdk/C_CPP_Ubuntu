// Program to demostrate use of resize function 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Your name is: " << name << endl;
	// Length of 'string' variables can be changed manually using 'resize()' function
	cout << "String capacity before resize: " << name.capacity() << endl;
	name.resize(7);							// Makes string length = 7
	cout << "Your name after resize is: " << name << endl;
	// 'resize()' doesn't affect the capacity of string
	cout << "String capacity after resize: " << name.capacity() << endl;
	return 0;
}