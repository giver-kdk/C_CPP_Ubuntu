#include <iostream>
// Header file used for file handling purpose
#include <fstream>
#include <stdio_ext.h>
using namespace std;

int main()
{
	// Create object of class 'fstream'
	fstream f;
	char ch;
	// Open a file in write mode
	f.open("File1.txt", ios::in);
	// NULL is returned on failure
	// Check as boolean value
	if(f)
	{
		// 'eof()' function return true when EOF reached
		while(!f.eof())
		{
			// Write file data into 'ch' characterwise
			__fpurge(stdin);								// Alternative of fflush(stdin);
			f >> ch;
			cout << ch;
		}
		cout << endl;
	}
	// Close the opened file
	f.close();
	return 0;
}