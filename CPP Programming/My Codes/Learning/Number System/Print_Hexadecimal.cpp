// Program to convert integer into hexadecimal and print on screen.
#include <iostream>
using namespace std;

int main()
{
	int number = 13, num1 = 14;
	cout << "Before hexadecimal conversion" << endl;
	cout << number << "\t" << num1 << endl;
	cout << "After hexadecimal conversion" << endl;
	// 'hex' prints the number into Hexadecimal
	cout << hex << number << "\t" << num1 << endl;
	cout << "After hexadecimal conversion with uppercase" << endl;
	// 'uppercase' outputs hex values in Capital
	cout << hex << uppercase << number << "\t" << num1 << endl;
	cout << "Conversion sustains..." << endl;
	cout << number << "\t" << num1 << endl;
	// Incrementing numbers in hexadecimal state
	number++;
	num1++;
	cout << "After incrementaion" << endl;
	cout << number << "\t" << num1 << endl;
	cout << "Revert back to decimal" << endl;
	// 'dec' converts back to decimal and 'nouppercase' reverts back to lowercase
	cout << dec << nouppercase << number << "\t" << num1 << endl;
	cout << "Conversion sustains..." << endl;
	cout << number << "\t" << num1 << endl;
	return 0;
}