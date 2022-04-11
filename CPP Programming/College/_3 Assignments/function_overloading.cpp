// Program to demonstrate function overloading
#include<iostream>
using namespace std;

// Function with same name but different parameters
int sum(int num)
{
	num = num + 20;
	return num;
}
double sum(double num)
{
	num = num + 30;
	return num;
}
int sum(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

int main()
{
	// Different functions are called intellectually according to the parameter
	cout << sum(2) << endl;
	cout << sum(2.5) << endl;
	cout << sum(2, 3) << endl;
	return 0;
}