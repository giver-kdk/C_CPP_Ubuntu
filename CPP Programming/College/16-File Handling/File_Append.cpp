#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	// Open file in append mode
	file.open("File1.txt", ios::app);
	// If file is opened
	if(file)
	{
		file << "This is appended text" << endl;
		cout << "File has been appended\n";
	}
	file.close();
	return 0;
}