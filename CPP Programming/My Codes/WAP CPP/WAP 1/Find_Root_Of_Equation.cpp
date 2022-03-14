// Write a C++ program that reads coefficients of quadratic equations and finds its roots
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c, difference, root1, root2, m, n;
	cout << "Enter coefficients of quadratic equation: ";
	cin >> a >> b >> c;
	difference = (b * b) - (4 * a * c);
	if(difference > 0)
	{
		// Real and unequal roots
		root1 = (((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a));
		root2 = (((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a));
	}
	else if(difference == 0)
	{
		// Real and equal roots
		root1 = (-b)/ (2 * a);
		root2 = root1;
	}
	else
	{
		// Imaginary roots
		m = (-b)/ (2 * a);
		n = sqrt(-((b * b) - (4 * a * c)));
		cout << "Imaginary roots are: " << endl;
		cout << m << " + " << "i." << n << endl;
		cout << m << " - " << "i." << n << endl;
		exit(0);
	}
	cout << "Roots of equation are:" << endl;
	cout << "1st root: " << root1 << endl;
	cout << "2nd root: " << root2 << endl;

	return 0;
}