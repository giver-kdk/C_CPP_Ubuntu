// Write a C++program that reads a number and tests whether it is multiple of 5 or not.
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter any number: ";
	cin >> num;
	if(num % 5 == 0)
	{
		cout << "Number is multiple of 5" << endl;
	}
	else
	{
		cout << "Number is not multiple of 5" << endl;
	}
	return 0;
}