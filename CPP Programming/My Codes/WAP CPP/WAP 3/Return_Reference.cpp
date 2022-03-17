#include <iostream>
using namespace std;

int x = 0;
int &setx()
{
	return x;
}

int main()
{
	int num = 5;
	cout << "Before Set" << endl;
	cout << "Value of x: " << x << endl;
	setx() = num;
	cout << "After Set" << endl;
	cout << "Value of x: " << x << endl;
	return 0;
}