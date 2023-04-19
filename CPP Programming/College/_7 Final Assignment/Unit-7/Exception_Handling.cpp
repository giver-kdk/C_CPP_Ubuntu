// Program to show exception handling using try, throw and catch
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, result;
	cout << "Enter Dividend and Diviser: ";
	cin >> num1 >> num2;
	try
	{
		if(num2 == 0)
		{
			string error = "Divide by zero error!!!";
			throw error;
		}
		else
		{
			result = num1 / num2;
			cout << "The result of division is: " << result << endl;
		}
	}
	catch(string error)
	{
		cout << error << endl;
	}
	cout << "Program Completed!" << endl;
	return 0;
}