// Program to demonstrate the use of function template
#include <iostream>
using namespace std;

template <class Type>
Type multiply(Type a, Type b)
{
	Type result = a * b;
	return result;
}
int main()
{
	cout << "Product: " << multiply(2, 3) << endl;
	cout << "Product: " << multiply(10.5, 5.6) << endl;
	return 0;
}