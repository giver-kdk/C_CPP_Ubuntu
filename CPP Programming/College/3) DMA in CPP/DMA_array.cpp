// Program for DMA of array using 'new' 
#include<iostream>
using namespace std;

int main()
{
	int i, size = 4;
	// Integer array of 4 elements is allocated
	int *ptr = new(nothrow) int[size];		// After allocation, 'ptr' points to base address of array
	if(ptr == NULL)
	{
		cout << "Error Alocating Memory" << endl;
	}
	else
	{
		cout << "Enter any " << size << " Elements: " << endl;
		for(i = 0; i < size; i++)
		{
			// cin >> (ptr + i);			// Not valid in C++
			int num;
			cin >> num;		
			*(ptr + i) = num;				// Indirectly assigning value on pointed address
		}
		cout << "The array elements are: " << endl;
		for(i = 0; i < size; i++)
		{
			cout << *(ptr + i) << endl;
		}
	}
	// Syntax for deleting entire array from memory
	delete []ptr;
	return 0;
}