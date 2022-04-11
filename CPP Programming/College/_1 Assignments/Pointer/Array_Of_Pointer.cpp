// Program to demostration application of pointer array
#include<iostream>
using namespace std;

int main()
{
	int i;
	int *pointers[5], array[5];

	cout << "Enter any 5 elements: " << endl;
	for(i = 0; i < 5; i++)
	{
		cin >> *(array + i);
		*(pointers + i) = (array + i);		// Equivalent to pointers[i] = &array[i];
	}
	cout << "The elements are: " << endl;
	for(i = 0; i < 5; i++)
	{
		cout << *(*(pointers + i)) << "\t";	// Equivalent to *pointers[i];
	}
	cout << endl;
	return 0;
}