// Program to demostrate use of capacity function 
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
	// 'capacity()' returns no. of memory allocated which may be greater than actual length of string
	cout << name.capacity() << endl;
	return 0;
}