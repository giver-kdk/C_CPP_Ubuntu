// Program to demostrate use of swap function to swap two strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name1 = "Giver", name2 = "Ram";
	cout << "Before Swap: " << endl;
	cout << "First name is: " << name1 << endl;
	cout << "Second name is: " << name2 << endl;
	// String of 'name1' and 'name2' is swaped
	name1.swap(name2);
	// name2.swap(name1);		// Similarly swaps strings
	cout << "After Swap: " << endl;
	cout << "First name is: " << name1 << endl;
	cout << "Second name is: " << name2 << endl;
	return 0;
}