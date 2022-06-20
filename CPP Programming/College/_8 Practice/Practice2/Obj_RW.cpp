#include <iostream>
#include <fstream>
using namespace std;

class Student
{
	char name[20];
	int id;
	char level[20];
	public:
		Student(){}
		void input()
		{
			cout << "Enter student name: ";
			cin.getline(name, 20);
			cout << "Enter ID: ";
			cin >> id;
			cin.ignore();
			cout << "Enter Level: ";
			cin.getline(level, 20);
		}
		void display()
		{
			cout << "Students details are: " << endl;
			cout << "Name: " << name << endl;
			cout << "ID: " << id << endl;
			cout << "Level: " << level << endl;
		}
};

int main()
{
	Student s1, s2;
	s1.input();
	fstream file;
	// Open File in Write Mode 
	file.open("File.txt", ios::out);
	// Reading object and writing on file
	file.write((char *)&s1, sizeof(s1));
	file.close();

	// Open File in Read Mode
	file.open("File.txt", ios::in);
	// Read file and Write object 
	file.read((char *)&s2, sizeof(s2));
	s2.display();
	return 0;
}