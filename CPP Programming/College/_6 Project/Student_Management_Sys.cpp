// Student Management System Project 
#include <iostream>
#include <stdlib.h>
#include <fstream>

#define INFO_NUM 6
using namespace std;

class Student
{
	int id;
	string name;
	int rollNum;
	char section;
	string program;
	string semester;
	public:
		void registration()
		{
			cout << "Enter student ID: ";
			cin >> id;
			cin.ignore();			// Flush buffer memory
			cout << "Enter student name: ";
			getline(cin, name);
			cout << "Enter roll number: ";
			cin >> rollNum;
			cout << "Enter section: ";
			cin >> section;
			cin.ignore();			
			cout << "Enter program: ";
			getline(cin, program);
			cout << "Enter semester: ";
			getline(cin, semester);
		}
		int get_id()
		{
			return id;
		}
		string get_name()
		{
			return name;
		}
		int get_rollNum()
		{
			return rollNum;
		}
		char get_section()
		{
			return section;
		}
		string get_program()
		{
			return program;
		}
		string get_semester()
		{
			return semester;
		}

};
void register_students();
void search_student();

int main()
{
	char choice;
	start:
	cout << "What do you want to do?" << endl;
	cout << "1) Register Students\t\t2) Search Student: ";
	cin >> choice;
	switch(choice)
	{
		case '1':
			register_students();
			break;
		case '2':
			search_student();
			break;
		default:
			cout << "Invalid Choice!!!" << endl << endl;
			goto start;
	}
	cout << "Do you want to continue? (Y/N): ";
	cin >> choice;
	if(choice == 'y' || choice == 'Y')
	{
		goto start;
	}
	return 0;
}
void register_students()
{
	fstream file;
	file.open("Student.txt", ios::app);
	// If file is not opened
	if(!file)
	{
		cout << "Error opening file" << endl;
	}
	else
	{
		Student stu;
		int number, i;
		cout << "Enter the number of students to add: ";
		cin >> number;
		// Write in File
		for(i = 0; i < number; i++)
		{
			stu.registration();
			file << stu.get_id() << endl;			// For Searching purpose
			file << "Student ID: " << stu.get_id() << endl;
			file << "Student Name: " << stu.get_name() << endl;
			file << "Roll Number: " << stu.get_rollNum() << endl;
			file << "Section: " << stu.get_section() << endl;
			file << "Program: " << stu.get_program() << endl;
			file << "Semester: " << stu.get_semester() << endl;
			file << endl;
		}
	}
	file.close();
}
void search_student()
{
	cin.ignore();
	search:
	fstream file;
	file.open("Student.txt", ios::in);
	// If file is not opened
	if(!file)
	{
		cout << "Error opening file" << endl;
	}
	else
	{
		int i;
		string identity;
		string data;
		char choice;
		cout << "Enter the student ID to search: ";
		getline(cin, identity);
		while(!file.eof())
		{
			// Store a line from file to data
			getline(file, data);
			if(data == identity)
			{
				cout << "Details of the student: " << endl;
				for(i = 0; i < INFO_NUM; i++)
				{
					getline(file, data);
					cout << data << endl;
				}
				cout << endl;
				cout << "Do you want to search more? (Y/N): ";
				cin >> choice;
				cin.ignore();
				if((choice == 'y') || (choice == 'Y'))
				{
					goto search;
				}
				else
				{
					file.close();
					return;
				}
			}
		}
		cout << "There is no student with such ID in the file" << endl;
		cout << "Try again..." << endl << endl;
		goto search;
	}
}