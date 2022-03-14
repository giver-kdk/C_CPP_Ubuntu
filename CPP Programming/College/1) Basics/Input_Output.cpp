// Program to demonstrate basic input output functionalitites in CPP.
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter any number: ";				// 'cout' is for standard output 
	cin >> num1;								// 'cin' is for standard input
	cout << "Enter any two numbers: ";
	cin >> num2 >> num3;						// Taking multiple inputs at same time
	cout << "First number is: " << num1 << endl;// 'endl' means end line (New Line)
	cout << "Last two numbers: " << num2 << " and " << num3 << endl;
	return 0;
}