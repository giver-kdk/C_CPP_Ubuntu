// There are many built-in functions for string 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char old_string[20];
	string new_string;
	cout << "Enter your name: ";
	// 'getline()' takes string input including whitespace
	getline(cin, new_string);				// 'cin' is required
	// Store 10 character string in 'old_string' char array
	cout << "Enter your surname: ";
	cin.getline(old_string, 10);
	// cin >> name;					// 'cin' alone doesn't take whitespace input
	cout << "Your name is: " << new_string << endl;
	cout << "Your surname is: " << old_string << endl;
	return 0;
}