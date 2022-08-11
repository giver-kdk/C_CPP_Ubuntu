// Program to take input and print details of Student using class and object
#include <iostream>
using namespace std;

class Student
{
	private:
		long phoneNum;				// Long Integer for phone number
	public:
		string name;
		char section;
		int roll;
		void set_details();
		void print_details();
};
void Student :: set_details()
{
	cout << "Enter name of Student: ";
	getline(cin, name);
	cout << "Enter section: ";
	cin >> section;
	cout << "Enter roll number: ";
	cin >> roll;
	cout << "Enter phone number: ";
	cin >> phoneNum;
}

void Student :: print_details()
{
	cout << "Name: " << name << endl;
	cout << "Section: " << section << endl;
	cout << "Roll Number: " << roll << endl;
	cout << "Phone Number: " << phoneNum << endl;
}

int main()
{
	Student s1;
	s1.set_details();
	s1.print_details();
	// cout << s1.phoneNum;			// Since, 'phoneNum' is private. So, not allowed.
	return 0;
}