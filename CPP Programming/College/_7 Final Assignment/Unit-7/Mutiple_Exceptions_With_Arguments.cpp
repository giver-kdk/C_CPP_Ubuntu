// Program to handle multiple exceptions and use exception with argument
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter any number: ";
	cin >> number;
	try
	{
		// Multiple Exceptions
		if(number > 0)
		{
			throw number;
		}
		else
		{
			string error = "Number is negative";
			throw error;
		}
	}
	// Exception with arguments
	catch(int num)
	{
		cout << "The entered number is: " << num << endl;
	}
	catch(string e)
	{
		cout << e << endl;
	}
	return 0;
}