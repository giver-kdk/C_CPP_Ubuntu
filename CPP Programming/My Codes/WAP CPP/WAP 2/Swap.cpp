/* Write a C++program that reads two numbers and swap them. */
#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "Enter value of a and b: ";
	cin >> a >> b;
	cout << "Before swap" << endl;
	cout << "Value of a: " << a << endl;
	cout << "Value of b: " << b << endl;
	swap(a, b);
	cout << "After swap" << endl;
	cout << "Value of a: " << a << endl;
	cout << "Value of b: " << b << endl;
	return 0;
}