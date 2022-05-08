// Program to handle exception when we try to enter more elements than the array size
#include <iostream>

using namespace std;

int main()
{
	int array[3];
	int i;

	for(i = 0; i < 5; i++)
	{
		try
		{
			if(i > 2)
			{
				// 'throw' is similar to 'return'. It can return any data type to 'catch'
				throw 404;
			}
			else
			{
				array[i] = i + 1;
			}
		}
		// Write catch just below try
		catch(int error)
		{
			cout << "Array index out of bound" << endl;
		}
	}

	for(i = 0; i < 3; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}