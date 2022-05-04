// WAP to calculate area of triangle using semi perimeter
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a = 2, b = 3, c = 8;
	int s = (a + b + c) / 2;
	int area = 0;
	try
	{
		if(s < a || s < b || s < c)
		{
			
			throw 404;
		}
		else
		{
			area = sqrt(s * (s - a) * (s - b) * (s - c));
		}
	}
	catch(int error)
	{
		cout << "Negative number inside square root" << endl;
	}
	cout << "Semi-perimeter: " << s << endl;
	cout << "Area of triangle is: " << area << endl;
}