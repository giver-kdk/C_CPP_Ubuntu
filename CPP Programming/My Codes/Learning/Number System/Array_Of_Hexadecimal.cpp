// Program to create an array of hexadecimal numbers
#include <iostream>
using namespace std;

int main()
{
	// Create 'int' type array and assign Hexadecimal value starting with '0x'
	int hexadeci[] = {0x10, 0xFFFF, 0xE, 0xA, 0x5};
	// int array[1000] = {0};
	for(int i = 0; i < 5; i++)
	{
		cout << hex << uppercase << hexadeci[i] << endl;
	}
	return 0;
}