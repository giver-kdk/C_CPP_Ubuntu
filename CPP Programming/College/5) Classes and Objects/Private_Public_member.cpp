// Program to demonstrate properties of private and public class members 
// NOTE: By default, the members of class are always 'private' unless its changed into 'public'
#include <iostream>
#include <string>
using namespace std;

// Create class with class name as employee
class employee	
{
	// Private members can only be accessed from class methods/functions
	private:
		int salary;						// Data
		int id;
		int addBonus()					// Method/Function
		{
			return (salary + 10000);
		}
	// Private members can be accessed from anywhere
	public:
		string name;
		string position;
		void enterInfo()
		{
			cout << "Enter employee name: ";
			getline(cin, name);
			cout << "Enter employee id: ";
			// 'id' is private. It is being accessed from class function
			cin >> id;		
			cin.ignore();						// Clears buffer memory
			cout << "Enter employee position: ";
			getline(cin, position);
			cout << "Enter employee salary: ";
			cin >> salary;
		}
		void printInfo()
		{
			cout << "Details of the employee are: " << endl;
			cout << "Name: " << name << endl;
			cout << "ID: " << id << endl;
			cout << "Position: " << position << endl;
			// 'salary' is private. It is being accessed from class function
			cout << "Salary: " << salary << endl;
		}
		void promotion()
		{
			// 'addBonus()' is private. It is being accessed from class function
			cout << "Salary after promotion: " << addBonus() << endl;
		}
};

int main()
{
	// Create 'emp1' object of class 'employee' 
	employee emp1;
	// Directly accessing public function is allowed
	emp1.enterInfo();
	emp1.printInfo();

	// Directly accessing public data is allowed
	cout << "Employee Name: " << emp1.name << endl;
	cout << "Employee Position: " << emp1.position << endl;
	// Directly accessing private data is not allowed
	// cout << "Employee ID: " << emp1.id << endl;
	// cout << "Employee Salary: " << emp1.salary << endl;

	emp1.promotion();
	// Directly accessing private function is not allowed
	// emp1.addBonus(10000);
	return 0;
}