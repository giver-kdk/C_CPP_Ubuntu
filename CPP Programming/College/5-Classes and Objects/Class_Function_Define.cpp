// Program to show different ways of defining class member functions
#include <iostream>
#include <string>
using namespace std;

// Create class with class name as Student
class Student
{
	private:
		int marks;
		void showResult();
	public:
		string name;
		int roll;
		char section;
		// Function definition inside the class
		void inputDetail()
		{
			cout << "Enter Student name: ";
			getline(cin, name);
			cout << "Enter roll number: ";
			cin >> roll;
			cout << "Enter section: ";
			cin >> section;
			cout << "Enter marks: ";
			cin >> marks;
		}
		// Function declaration/prototyping inside the class
		void printDetail();
		void printNameRoll();
}stu2, stu3;

int main()
{
	// Create 'stu1' object of class 'Student' 
	Student stu1;
	stu1.inputDetail();
	stu1.printDetail();

	cout << "\n" << endl;
	// stu1.showResult();				// Private functon not allowed!
	stu1.printNameRoll();
	return 0;
}
// Class member function definition outside the class
void Student :: printDetail()	// Scope resolution operator(::) is required after class name
{
	cout << "Name: " << name << endl;
	cout << "Roll No.: " << roll << endl;
	cout << "Section: " << section << endl;
	// Nesting class member function
	showResult();	
}

// Defining class member function below 'main()'
void Student :: printNameRoll()
{
	cout << "Name: " << name << endl;
	cout << "Roll No.: " << roll << endl;
}
// Defining private class member function outside the class
void Student :: showResult()
{
	if(marks >= 40)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}
