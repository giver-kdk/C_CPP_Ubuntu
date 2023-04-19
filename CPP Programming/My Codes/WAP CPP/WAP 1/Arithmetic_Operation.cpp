// Write a C++program to read any two numbers and performs simple arithmetic operations
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter any two numbers: ";
	cin >> num1 >> num2;
	cout << "Sum is: " << num1 + num2 << endl;
	cout << "Difference is: " << num1 - num2 << endl;
	cout << "Multiplication is: " << num1 * num2 << endl;
	cout << "Division is: " << num1 / num2 << endl;
	return 0;
}