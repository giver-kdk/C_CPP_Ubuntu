// Program to demonstrate initialization and use of static member function of class
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
			cout << "Employee Number: " << count << endl;
		}
		// Static function can only access static data member
		static void get_count()
		{
			// set_info();				// Not allowed
			// cout << id;				// Not allowed
			cout << "Value of count: " << count << endl << endl;		
		}
};
// 2nd step definition of static data member
int Employee :: count;					// Default vale is 0
// int Employee :: count = 5;				// Definition allowed outside class

int main()
{
	Employee e1, e2, e3;
	e1.set_info();
	e1.get_info();
	Employee::get_count();				// Calling static member function
	// e1.get_count();					// Normal calling allowed

	e2.set_info();
	e2.get_info();
	Employee::get_count();				

	e3.set_info();
	e3.get_info();
	Employee::get_count();			
	return 0;
}