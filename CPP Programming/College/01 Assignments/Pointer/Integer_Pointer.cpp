#include<iostream>
using namespace std;

int main()
{
	int num = 5;
	int *ptr = &num;
	cout << "Value of num: " << num << endl;
	cout << "Value of num: " << *ptr << endl;
	*ptr = 2 * (*ptr);
	cout << "Twice of num: " << num << endl;
	cout << "Address of num: " << &num << endl;
	cout << "Address of num: " << ptr << endl;
	cout << "Address of pointer: " << &ptr << endl;
	return 0;
}