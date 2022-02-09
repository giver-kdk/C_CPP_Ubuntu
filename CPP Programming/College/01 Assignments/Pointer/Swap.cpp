// Swapping numbers using pointrer variable as function parameter
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1 = 5, num2 = 10;
	cout << "Numbers before swap: " << num1 << " and " << num2 << endl;
	swap(&num1, &num2);
	cout << "Numbers after swap: " << num1 << " and " << num2 << endl;
	return 0;
}