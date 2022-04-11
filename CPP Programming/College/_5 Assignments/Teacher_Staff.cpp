// Program to read and display information about coordinator
#include <iostream>
using namespace std;

class Teacher
{
	protected:
		int tid;			// Teacher ID
		string subject;
	public:
		void input()
		{
			cout << "Enter Teacher ID: ";
			cin >> tid;
			cout << "Enter his/her subject: ";
			getline(cin, subject);
		}
		void display()
		{
			cout << "Teacher ID: " << tid << endl;
			cout << "Subject of expertise: " << subject << endl;
		}
};
class Staff
{
	protected:
	int sid;			// Staff ID
	string position;
	public:
		void input()
		{
			cout << "Enter Staff ID: ";
			cin >> sid;
			cout << "Enter his/her position: ";
			getline(cin, position);
		}
		void display()
		{
			cout << "Staff ID: " << sid << endl;
			cout << "Staff's Position: " << position << endl;
		}
};
// Multiple Inheritance
class Coordinator : protected Teacher, protected Staff
{
	protected:
	string department;
	public:
		void input()
		{
			cout << "Enter Coordinator's subject: ";
			getline(cin, subject);
			cout << "Enter his/her position: ";
			getline(cin, position);
			cout << "Enter department: ";
			getline(cin, department);
		}
		void display()
		{
			cout << "Details of Coordinator are: " << endl;
			cout << "Coordinator's Subject: " << subject << endl;
			cout << "Position: " << position << endl;
			cout << "Department: " << department << endl;
		}
};

int main()
{
	Coordinator c1, c2;
	c1.input();
	c2.input();
	c1.display();
	c2.display();
	return 0;
}