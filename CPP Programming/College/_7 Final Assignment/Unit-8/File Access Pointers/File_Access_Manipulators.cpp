// Program to use file access pointers and their manipulators like seekg, tellg, seekp, tellp, offset.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char data;
	fstream file;
	// Open file in both read and write mode
	file.open("File.txt", ios::in | ios::out);
	cout << "Get Position: " << file.tellg() << endl;
	// Move 6 characters forward(from start) for get
	file.seekg(6);
	cout << "Get Position: " << file.tellg() << endl;			// Displays current cursor positions
	file.get(data);
	cout << "Character Data: " << data << endl;

	// Move 2 characters forward for put
	file.seekp(2);
	cout << "Put Position: " << file.tellp() << endl;
	file.put('*');
	cout << "Put Position: " << file.tellp() << endl;

	cout << "Get Position: " << file.tellg() << endl;
	// Move 14 characters forward(from start) for get
	file.seekg(14, ios::beg);
	cout << "Get Position: " << file.tellg() << endl;
	file.get(data);
	cout << "Character Data: " << data << endl;

	cout << "Get Position: " << file.tellg() << endl;
	// Move 6 characters backwards from current position for get
	file.seekg(-6, ios::cur);
	cout << "Get Position: " << file.tellg() << endl;
	file.get(data);
	cout << "Character Data: " << data << endl;

	cout << "Get Position: " << file.tellg() << endl;
	// Move 2 characters backwards from ending for get
	file.seekg(-2, ios::end);
	cout << "Get Position: " << file.tellg() << endl;
	file.get(data);
	cout << "Character Data: " << data << endl;

	file.close();
	return 0;
}