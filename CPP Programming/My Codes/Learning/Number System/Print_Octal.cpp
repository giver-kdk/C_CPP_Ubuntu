// Program to convert integer into Octal and print on screen.
#include <iostream>
using namespace std;

int main()
{
	int number = 10, num1 = 8;
	cout << "Before octal conversion" << endl;
	cout << number << "\t" << num1 << endl;
	cout << "After octal conversion" << endl;
	// 'oct' converts the number into Octal
	cout << oct << number << "\t" << num1 << endl;
	cout << "Conversion sustains..." << endl;
	cout << number << "\t" << num1 << endl;
	cout << "Revert back to decimal" << endl;
	// 'dec' reverts back to decimal
	cout << dec << number << "\t" << num1 << endl;
	cout << "Conversion sustains..." << endl;
	cout << number << "\t" << num1 << endl;
	return 0;
}