// Program to demostrate use of length function
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Your name is: " << name << endl;
	// 'length()' returns actual length of string
	cout << name.length() << endl;
	return 0;
}