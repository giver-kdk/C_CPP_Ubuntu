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
	catch(string error)
	{
		cout << "Divide by zero error" << endl;
		cout << error << endl;
	}
	cout << "Program Completed!" << endl;
	return 0;
}