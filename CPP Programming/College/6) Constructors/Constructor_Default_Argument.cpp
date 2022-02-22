// Program to demonstrate constructor with default arguments
#include <iostream>
using namespace std;

class Student
{
	private:
		string name;
		int roll;
		char section;
	public:
		// 'r' and 's' are Default Arguments
		Student(string n, int r = 10, char s = 'A')		
		{
			name = n;
			roll = r;
			section = s;
		}
		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Roll Number: " << roll << endl;
			cout << "Section: " << section << endl;
		}
};

int main()
{
	// Only, 'name' is given. So, roll and section will be default
	Student s1("Ram");
	s1.display();
	// Only, 'name' and 'roll' is given. So, section will be default
	Student s2("Shyam", 12);
	s2.display();
	// 'name', 'roll' and 'section' is given.
	Student s3("Hari", 13, 'B');
	s3.display();
	return 0;
}