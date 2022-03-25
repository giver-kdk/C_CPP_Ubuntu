// Program to increment a number using pointer 
#include<iostream>
using namespace std;

void increment(int *num)
{
	(*num)++;			// Bracket is compulsary
}	

int main()
{
	int a = 5;
	cout << "Value of 'a' before increment: " << a << endl;
	increment(&a);
	cout << "Value of 'a' after increment: " << a << endl;
	return 0;
}