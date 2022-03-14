// Program to just print integer into Binary(Not Convert).
#include <iostream>
#include <bitset>			// Needed to use 'bitset'

using namespace std;

int main()
{
	int number = 13;
	// Print the number into Binary
	cout << "Before binary printing" << endl;
	cout << number << endl;
	cout << "After binary printing" << endl;
	cout << bitset<8>(number) << endl;			// '<8>' prints in 8-bit format
	cout << bitset<16>(number) << endl;			// '<16>' prints in 16-bit format
	cout << "Original data" << endl;
	cout << number << endl;
	return 0;
}