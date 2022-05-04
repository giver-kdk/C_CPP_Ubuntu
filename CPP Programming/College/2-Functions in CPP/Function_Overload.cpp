// Program to demonstrate function overloading
#include<iostream>
using namespace std;

// Function with same name but different parameters
int add(int num)
{
	num = num + 20;
	return num;
}
double add(double num)
{
	num = num + 30;
	return num;
}
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
double add(double num1, double num2)
{
	double sum = num1 + num2;
	return sum;
}
int add(int num1, int num2, int num3)
{
	int sum = num1 + num2 + num3;
	return sum;
}

int main()
{
	// Different functions are called intellectually according to the parameter
	cout << add(2) << endl;
	cout << add(2.5) << endl;
	cout << add(2, 3) << endl;
	cout << add(2.5, 3.5) << endl;
	cout << add(2, 3, 4) << endl;
	return 0;
}