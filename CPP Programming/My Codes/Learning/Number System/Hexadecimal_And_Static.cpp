// Program to demonstrate hexadecimal conversion of static variable inside a function
#include <iostream>
using namespace std;

void printHex()
{
	// Static variable is initialized only once.
	static int number = 8;
	cout << hex << uppercase << number << endl;
	number++;
}

int main()
{
	printHex();
	printHex();
	printHex();
	printHex();
	printHex();
	printHex();
	return 0;
}