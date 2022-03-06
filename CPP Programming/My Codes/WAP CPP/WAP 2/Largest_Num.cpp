// Given three numbers, write a  C++ program to read three numbers from keyword and 
// print out the largest of them without using if statement.
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, largest;
	cout << "Enter any three number: ";
	cin >> a >> b >> c;
	largest = a > b ? a : b;
	largest = largest > c ? largest : c;
	cout << "The largest number is: " << largest << endl; 
	return 0;
}