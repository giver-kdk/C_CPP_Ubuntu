// Write a C++program that reads a number and tests whether is it multiple of 5 and 11
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter any number: ";
	cin >> num;
	if((num % 5 == 0) && (num % 11 == 0))
	{
		cout << "Number is multiple of 5 and 11" << endl;
	}
	else
	{
		cout << "Number is not a multiple of 5 and 11" << endl;
	}
	return 0;
}