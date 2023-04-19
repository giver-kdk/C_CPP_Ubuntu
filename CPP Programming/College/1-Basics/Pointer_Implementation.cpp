// Implementation of pointer in C++ is similar to that in C
#include<iostream>
using namespace std;

int main()
{
	int num = 20;
	int *ptr =  &num;
	cout << "Value of num: " << num << endl;
	// '*' and '&' cancels each other
	cout << "Value of num: " << *(&num) << endl;		// Value in address of num
	cout << "Value of num: " << *ptr << endl;
	cout << "Address of num: " << &num << endl;
	cout << "Address of num: " << ptr << endl;
	cout << "Address of num: " << &(*ptr) << endl;		// Address of value pointed by pointer
	cout << "Address of pointer variable: " << &ptr << endl;

	int array[] = {5, 4, 3, 2, 1};
	// Array name is equivalent to its base address
	int *ptr2 = array;					
	cout << "Base address of array: " << ptr2 << endl;
	cout << "Value of index 0: " << *ptr2 << endl;
	cout << "Value of index 1: " << *(ptr2 + 1) << endl;
	cout << "Value of index 2: " << *(ptr2 + 2) << endl;
	cout << "Value of index 3: " << *(ptr2 + 3) << endl;
	cout << "Value of index 4: " << *(ptr2 + 4) << endl;
	cout << "Value pointed: " << *ptr2 << endl;
	ptr2++;												// Increment one address block
	cout << "Value pointed: " << *ptr2 << endl;
	ptr2--;												// Decrement one address block
	cout << "Value pointed: " << *ptr2 << endl;
	return 0;
}