// Program to demonstrate the use of function template
#include <iostream>
using namespace std;

template <class Type>
Type addition(Type a, Type b)
{
	Type sum = a + b;
	return sum;
}

int main()
{
	int x = 12, y = 16;
	cout << "Sum of two numbers: " << addition(x, y) << endl;
	cout << "Sum of two characters: " << addition('1', '2') << endl;
	return 0;
}