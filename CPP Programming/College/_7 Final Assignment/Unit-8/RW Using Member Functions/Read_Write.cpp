// Program to read and write file using put(), get(), read() and write() member functions
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{
public:
	// Character array used as string to have fixed size in memory
	char name[20];
	int roll_num;
	void input_info()
	{
		cout << "Enter student name: ";
		cin.getline(name, 30);
		cout << "Enter roll number: ";
		cin >> roll_num;
	}
	void get_info()
	{
		cout << "Name: " << name << endl;
		cout << "Roll Number: " << roll_num << endl;
	}
};

int main()
{
	// File Writing using put()
	ofstream file1;
	file1.open("File1.txt", ios::out);
	char ch;
	cout << endl
		 << "Press CTRL + Y to finish writing." << endl
		 << endl;
	cout << "Enter text to save in file: ";
	cin >> ch;
	while (ch != 25) // 25 means End of Medium
	{
		file1.put(ch);
		cin >> ch;
	}
	file1.close();

	// File Reading using get()
	ifstream file2;
	file2.open("File1.txt", ios::in);
	cout << "Content inside file is: " << endl;
	file2.get(ch);
	while (!file2.eof())
	{
		cout << ch;
		file2.get(ch);
	}
	cout << endl;
	file2.close();

	// File Writing using write()
	Student s1, s2;
	// s1.name.resize(10);
	cin.ignore();
	cout << "Enter data again." << endl;
	s1.input_info();
	ofstream file3;
	file3.open("File2.txt", ios::out);
	file3.write((char *)&s1, sizeof(s1));
	cout << "File written successfully!" << endl;
	file3.close();

	// File Reading using read()
	ifstream file4;
	file4.open("File2.txt", ios::in);
	file4.read((char *)&s2, sizeof(s2));
	cout << "File content are: " << endl;
	s2.get_info();
	file4.close();
	return 0;
}