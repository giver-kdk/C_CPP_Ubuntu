// Program to apply alternative variabe name using reference vaiable.
#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	cout<<"x = " << x << endl;
	// Reference variable is used to make two instances of same variable
	// Reference variables doesn't occupy memory. They just reference a existing variable
	int &y = x;						// Now, x and y variables are same variables
	cout << "y = " << y << endl;
	x = x + 2;						// When x is changed, y is also changed
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	//Hence, reference variabe and original variables canbe used interchangeably
}