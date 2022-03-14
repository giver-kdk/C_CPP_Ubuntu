/* Write a C++ program to print ASCII value of all characters. */
#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter any character: ";
	cin >> ch;
	// Data type conversion
	int ascii = int(ch);
	cout << "ASCII value of " << ch << " is: " << ascii << endl;
	return 0;
}