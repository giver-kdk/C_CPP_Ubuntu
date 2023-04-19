// Porgram to test error during file operation using eof(), fail(), bad() and good()
#include <iostream>
#include <fstream>
using namespace std;

void test_error(fstream &obj)
{
	// Error functions return 1 if true
	if (obj.eof())
	{
		cout << "End of File reached" << endl;
	}
	if (obj.fail())
	{
		cout << "Logical Error in file handling" << endl;
	}
	if (obj.bad())
	{
		cout << "Read/Write Error in file handling" << endl;
	}
	if (obj.good())
	{
		cout << "No Logical Errors" << endl;
	}
	cout << endl;
}

int main()
{
	string data;
	fstream file;
	// Open file having one line sentence
	file.open("File.txt", ios::in);
	test_error(file);

	getline(file, data); // Read entire line
	test_error(file);

	getline(file, data); // No data left to read
	test_error(file);
	file.close();

	// Manually set badbit to simulate read/write failure
	file.clear(file.badbit); // This is set automatically when error actually happens
	test_error(file);
	return 0;
}