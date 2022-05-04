// Program to demonstrate the use of constructor in derived class
#include <iostream>
using namespace std;

class Person
{
	string name;
	public:
		Person(string n) : name(n){}
		string get_name()
		{
			return name;
		}
};
class Student : public Person
{
	int roll_num;
	public:
		Student(string n, int r) : Person(n), roll_num(r){}
		void display()
		{
			cout << "Name: " << get_name() << endl;
			cout << "Roll Number: " << roll_num << endl;
		}
};

int main()
{
	Student s1("Sheldon", 15);
	s1.display();
	return 0;
}