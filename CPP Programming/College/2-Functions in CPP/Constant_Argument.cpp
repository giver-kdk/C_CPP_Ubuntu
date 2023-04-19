#include <iostream>
using namespace std;

void display(const int num = 5)
{
	// num = 2;						// Cannot modify this variable
	cout << "Number: " << num << endl;
}

int main()
{	
	display(2);						// Can overwrite default value
	display();
	return 0;
}