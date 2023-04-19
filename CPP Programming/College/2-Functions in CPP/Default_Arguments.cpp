// Default arguments are function arguments with default values which are used when user value is unavailable.
// The default arguments should be arranged in function from "extreme Right"
#include <iostream>
using namespace std;
// num3 and num4 are default arguments here.
int add(int num1, int num2, int num3 = 7, int num4 = 8)
{
	int result = num1 + num2 + num3 + num4;
	return result;
}

int main()
{
	int a = 2, b = 3, c = 4, d = 5, sum;
	sum = add(a, b);
	cout << "Sum is: " << sum << endl;
	sum = add(a, b, c);
	cout << "Sum is: " << sum << endl;
	sum = add(a, b, c, d);
	cout << "Sum is: " << sum << endl;
	return 0;
}