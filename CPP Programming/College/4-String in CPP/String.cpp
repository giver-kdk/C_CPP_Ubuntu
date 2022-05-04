// NOTE: 'string' is a standard class which has built-in functions in it.
#include <iostream>
#include <string>				// 'string' operator declared in <string> header file 
// #include <string.h>			// This is characterwise string header file
using namespace std;			// 'string' also uses 'std' namespace

int main()
{
	string name = "Giver Khadka";		// Variable of data type 'string'
	string address;

	cout << "Enter address: ";
	cin >> address;						// 'cin' ends at whitespace
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	return 0;
}