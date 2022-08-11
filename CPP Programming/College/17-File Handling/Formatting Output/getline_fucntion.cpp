// Program to demonstrate the use of getline  function
#include <iostream>
using namespace std;

int main()
{
	char s[20];
	cout <<  "Enter a string: " << endl;
	// Takes specified number of string(C standard char array) input which also takes whitespace
	cin.getline(s, 10);
	cout << "You have entered: " << s << endl;
	return 0;
}