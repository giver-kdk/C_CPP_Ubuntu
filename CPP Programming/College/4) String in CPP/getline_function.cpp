// There are many built-in functions for string 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	// 'getline()' takes string input including whitespace
	getline(cin, name);				// 'cin' is required
	// cin >> name;					// 'cin' alone doesn't take whitespace input
	cout << "Your name is: " << name << endl;
	return 0;
}