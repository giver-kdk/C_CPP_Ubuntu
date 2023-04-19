// Write a C++program that reads a number and finds sum of the squares of digits
#include <iostream>
using namespace std;

int main()
{
	int num, i, remainder, sum = 0;
	cout << "Enter a number: ";
	cin >> num;
	while(num != 0)
	{
		remainder = num % 10;
		sum = sum + (remainder * remainder);
		num = num / 10;
	}
	cout << "Sum of squares of digit: " << sum << endl;
	return 0;
}