#include<iostream>
using namespace std;

int number = 1;

int &changeTo()
{
// Use global variable to return by reference
	return number;
}
int product(int a, int b)
{
	return (a * b);
}

int main()
{
	int i, n;
	cout << "Enter a number for multiplication table: ";
	cin >> n;
	// Assign value of 'n' to 'number'
	changeTo() = n;
	for(i = 1; i <= 10; i++)
	{
		// Using modified global variable 'number'
		cout << number << " * " << i << " = " << product(number, i) << endl;
	}
	return 0;
}