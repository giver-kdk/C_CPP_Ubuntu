// Program to use setprecision(from iomanip)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x = 1;
	// 'fixed' sets the precision limit of variable to max 
	// setprecision(3) sets desired precision 
	cout << fixed << setprecision(4) << x << endl;
	// Sets the output in scientific format
	cout << scientific << x << endl;
	return 0;
}