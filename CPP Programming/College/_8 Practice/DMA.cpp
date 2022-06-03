#include <iostream>
using namespace std;

int main()
{
	int *ptr = new(nothrow) int;
	double *ptr2 = new(nothrow) double(20.5);
	char *ptr3 = new(nothrow) char[10];
	for(int i = 0; i < 5; i++)
	{
		ptr3[i] = 'a' + i;
	}
	for(int i = 0; i < 5; i++)
	{
		cout << ptr3[i];
	}
	delete ptr;
	delete ptr2;
	delete []ptr;
	return 0;
}