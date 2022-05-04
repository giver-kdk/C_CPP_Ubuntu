// Program to demonstrate initialization and use of static data member of class
#include <iostream>
using namespace std;

class Employee
{
	private:
		int id;
		double salary;
		static int count;				// 1st step declaration of static data member
		// static int count = 5;				// Definition not allowed inside class
	public:
		static int demoNumber;
		void set_info()
		{
			cout << "Enter employee id: ";
			cin >> id;
			cout << "Enter employee salary: ";
			cin >> salary;
			count++;					// 'count' increments with every number of objects
		}
		void get_info()
		{
			cout << "Employee id: " << id << endl;
			cout << "Employee salary: " << salary << endl;
			cout << "Employee Number: " << count << endl << endl;
		}
};
// 2nd step definition of static data member
int Employee :: count;					// Default vale is 0
// int Employee :: count = 5;				// Definition allowed outside class
int Employee :: demoNumber;

int main()
{
	Employee e1, e2, e3;
	e1.set_info();
	e1.get_info();
	// e1.count = 0;						// Illegal
	e1.demoNumber = 0;						// Legal since 'demoNumber' is public static variable

	e2.set_info();
	e2.get_info();

	e3.set_info();
	e3.get_info();
	return 0;
}