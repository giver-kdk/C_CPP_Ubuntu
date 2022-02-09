// push_back function inserts a character at the end of string
// pop_back function deletes a character from the end of string
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Your name is: " << name << endl;
	// Inserts 's'
	name.push_back('s');
	cout << "Your name with push_back is: " << name << endl;
	// Removes last character 's'
	name.pop_back();
	cout << "Your name with pop_back is: " << name << endl;
	return 0;
}