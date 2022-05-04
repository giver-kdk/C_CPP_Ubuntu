// Program to demonstrate basic input output functionalities in CPP.
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter any number: ";				
	cin >> num1;								
	cout << "Enter any two numbers: ";
	cin >> num2 >> num3;						
	cout << "First number is: " << num1 << endl;
	cout << "Last two numbers: " << num2 << " and " << num3 << endl;
	return 0;
}