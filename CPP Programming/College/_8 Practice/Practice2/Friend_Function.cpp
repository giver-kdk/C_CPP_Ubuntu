#include <iostream>
using namespace std;

class Student
{
	string name;
	int roll;
	public:
		Student(){}
		Student(string n, int r) : name(n), roll(r){}
		friend void show(Student obj);
};
void show(Student obj)
{
	cout << "Name: " << obj.name << endl;
	cout << "Roll Number: " << obj.roll << endl;
}
int main()
{
	Student s1("Ram", 12);
	show(s1);
	return 0;
}