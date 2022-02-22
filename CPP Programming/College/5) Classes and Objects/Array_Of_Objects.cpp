// Classes are user defined data types. So, objects of the class can also be array.
#include <iostream>
using namespace std;

int count = 1;							// Global Variable

class Employee
{
	private:
		string name;
		int id;
	public:
		void set_info();
		void get_info();
};

void Employee :: set_info()
{
	cout << "Enter name of employee no. " << count << ": ";
	getline(cin, name);
	cout << "Enter id: ";
	cin >> id;
	count++;							// Employee Count
}

void Employee :: get_info()
{
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
}

int main()
{
	Employee emp[5];					// Array of 5 'Employee' class objects
	int i;
	for(i = 0; i < 5; i++)
	{
		// Similar to array of structure 
		emp[i].set_info();				// Accessing 'ith' object and its member function
		cout << endl;
		emp[i].get_info();
		cin.ignore();					// Flush buffer memory
	}
	return 0;
}