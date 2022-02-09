// Program to show different ways of defining class member functions
#include <iostream>
#include <string>
using namespace std;

// Create class with class name as student
class student
{
	public:
		string name;
		int roll;
		char section;
		// Function definition inside the class
		void inputDetail()
		{
			cout << "Enter student name: ";
			getline(cin, name);
			cout << "Enter roll number: ";
			cin >> roll;
			cout << "Enter section: ";
			cin >> section;
		}
		// Function declaration/prototyping inside the class
		void printDetail();
		void printNameRoll();
};

// Class member function definition outside the class
void student :: printDetail()	// Scope resolution operator(::) is required after class name
{
	cout << "Name: " << name << endl;
	cout << "Roll No.: " << roll << endl;
	cout << "Section: " << section << endl;
}

int main()
{
	// Create 'stu1' object of class 'student' 
	student stu1;
	stu1.inputDetail();
	stu1.printDetail();

	cout << "\n" << endl;

	stu1.printNameRoll();
	return 0;
}
// Defining class member function below 'main()'
void student :: printNameRoll()
{
	cout << "Name: " << name << endl;
	cout << "Roll No.: " << roll << endl;
}
