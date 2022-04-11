/* //c++ program the fill() formatted output function fills the unused white spaces in a value(to be printed at the console), with a character of our choice.  */
#include <iostream>
using namespace std;

int main()
{
	char ch = 'a';
	// Fill the extra space with specified character
	cout.fill('(');
	cout.width(10);
	cout << ch << endl;
	int i = 1;
	// Updating the reserved width
	cout.width(5);
	cout << i << endl;
	return 0;
}