#include <iostream>
// Header file used for file handling purpose
#include <fstream>
using namespace std;

int main()
{
	// Create object of class 'fstream'
	fstream file;
	// Open a file in write mode
	file.open("File1.txt", ios::out);
	// NULL is returned on failure
	// Check as boolean value
	if(!file)
	{
		cout << "File cannot be created" << endl;
	}
	else
	{
		cout << "File Created!!!" << endl;
		// 'file' with '<<' writes to the file
		file << "This is first line\n";
	}
	// Close the opened file
	file.close();
	return 0;
}