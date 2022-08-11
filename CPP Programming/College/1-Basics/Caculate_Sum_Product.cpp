#include <iostream>
using namespace std;

// Function with reference variable as parameters
void calculate(int x, int y, int &sum, int &product)
{
	// Changing reference variable changes original variable too 
	sum = x + y;			
	product = x * y;
}

int main()
{
	int a = 10, b = 20, add, multiply;
	// Function call by value and reference
	calculate(a, b, add, multiply);
	cout << "Sum = " << add << endl;
	cout << "Product = " << multiply << endl;
}