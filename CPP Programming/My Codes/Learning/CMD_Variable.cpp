// Program to use string variable inside system() function
#include <iostream>
using namespace std;

int main()
{
	string command = "mkdir ";
	string name;
	cout << "Enter folder name: ";
	getline(cin, name);
	command += name;							// Edit string according to requirement
	// c_str() converts 'string' into C style string
	system(command.c_str());					// Final system command		
	
	return 0;
}