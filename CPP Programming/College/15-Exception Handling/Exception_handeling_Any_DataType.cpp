#include <iostream>

using namespace std;

int main()
{
	int a = 4, b = 0, res;
	
	try
	{
		if(b == 0)
		{
			string error = "Error vayo solti";
			// throw is similar to 'return'. It can return any data type
			throw error;
		}
		else
		{
			res = a / b;
			
			cout << res << endl;
		}

	}
	// '...' catches error thrown of any data type. Usually done when error value not required
	catch(...)
	{
		cout << "Divide by zero error" << endl;
		cout << endl;
	}
	cout << "Hello World" << endl;
	return 0;
}