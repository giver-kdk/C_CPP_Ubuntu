#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream file;							// Class for file writing
	// Open file in write mode
	file.open("Data.txt", ios::out);
	file << "This is a file" << endl;
	file.close();

	string info;
	ifstream file2;							// Class for file reading
	// Open file in read mode
	file2.open("Data.txt", ios::in);
	getline(file2, info);
	cout << "File data is: " << endl;
	cout << info << endl;
	file2.close();

	fstream file3;							// Class for reading, writing and appending
	// Open file in append mode
	file3.open("Data.txt", ios::app);
	file3 << "This is an added file content" << endl;
	file3.close();
	return 0;
}