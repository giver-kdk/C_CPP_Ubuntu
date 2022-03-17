#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int &y = x;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	x = 15;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	return 0;
}