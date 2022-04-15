// Program to read content of file data.txt and display on monitor
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("data.txt", ios::out);
	if(!file)
	{
		cout << "Error opening file!!!" << endl;
		exit(0);
	}
	else
	{
		file << "This is a file data" << endl;
		cout << "File has been written..." << endl;
	}
	file.close();
	file.open("data.txt", ios::in);
	if(!file)
	{
		cout << "Error opening file!!!" << endl;
		exit(0);
	}
	else
	{
		char ch;
		cout << "Reading File..." << endl;
		while(!file.eof())
		{
			file >> ch;
			cout << ch;
		}
		cout << endl;
	}
	return 0;
}