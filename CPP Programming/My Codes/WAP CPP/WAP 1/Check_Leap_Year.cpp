// Write a C++ program that reads a year (e.g 2012) and checks whether the entered year is leap year or not.
/* A leap year should meet the following condition:
a) For non-century years it should be exactly divisible by 4.
b) For century years it should be exactly divisible 400. */

#include <iostream>
using namespace std;

int main()
{
	int year, remainder;
	cout << "Enter a year: ";
	cin >> year;
	if(year % 100 == 0)
	{
		remainder = year % 400;
	}
	else
	{
		remainder = year % 4;
	}
	if(remainder == 0)
	{
		cout << "Leap Year" << endl;
	}
	else
	{
		cout << "Not Leap Year" << endl;
	}
	return 0;
}