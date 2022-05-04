// Passing by reference from a function
#include <iostream>
using namespace std;

void increment(int &number);
int main()
{
	int number = 15;
	increment(number);
	cout << "After reference pass: " << endl;
	cout << "number: " << number << endl;
	return 0;
}

void increment(int &number)
{
	number++;
	cout << "Incremented number is " << number << endl;
}