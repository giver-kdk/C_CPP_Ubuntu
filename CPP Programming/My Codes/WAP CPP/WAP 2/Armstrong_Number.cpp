#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, temp, sum = 0;
	int remainder, digitCount;
	cout << "Enter any number: ";
	cin >> number;
	temp = number;
	while(temp != 0)
	{
		remainder = temp % 10;
		sum = sum + pow(remainder, 3);
		temp = temp / 10;
	}
	if(sum == number)
	{
		cout << "The number is an armstrong number" << endl;
	}
	else
	{
		cout << "The number is not an armstrong number" << endl;
	}
	return 0;
}