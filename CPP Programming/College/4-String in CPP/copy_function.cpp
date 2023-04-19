// Program to demostrate use of copy function 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "Giver Khadka";
	char array[20];
	cout << "Your name is: " << name << endl;
	// 'copy(target_char_array, string_length, position)' copies specified lenght of substring to target array
	name.copy(array, 5, 0);		// Copies 5 characters from initial position of 'name' to 'array'
	cout << "Copied array is: " << array << endl;
	return 0;
}