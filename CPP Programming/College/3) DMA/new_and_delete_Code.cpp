#include <iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int;
	if(ptr == NULL)
	{
		cout << "Error Allocating Memory" << endl;
	}
	else
	{
		*ptr = 10;
		cout << "Value = " << *ptr << endl;
	}
	delete ptr;
	return 0;
}