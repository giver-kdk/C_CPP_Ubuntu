#include <iostream>
using namespace std;

class Student
{
	public:
		string name;
		int roll_num;
		// Constructor
		Student(string n, int r)
		{
			name = n;
			roll_num = r;
		}
		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Roll Number: " << roll_num << endl;
		}
};

int main()
{
	// 'new' allows to call the Constructor to initialize object
	Student *ptr = new(nothrow) Student("Ram", 5);
	if(ptr == NULL)
	{
		cout << "Memory allocation failed!!!" << endl;
	}
	else
	{
		ptr->display();
		delete ptr;
	}
}