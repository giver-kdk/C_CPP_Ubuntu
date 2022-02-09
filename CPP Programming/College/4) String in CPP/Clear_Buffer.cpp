// Program to demonstrate clearing input buffer using 'cin.ignore()'
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int marks;
	string name, address;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter marks: ";
	cin >> marks;
	// Clear input buffer memory
	cin.ignore();				// Similar to 'fflush(stdin)' in C	
	cout << "Enter address: ";
	getline(cin, address);
	return 0;
}