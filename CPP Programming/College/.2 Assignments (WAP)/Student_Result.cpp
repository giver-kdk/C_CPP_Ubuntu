/* Program to show the result of a student using the concept of class and object. */
#include <iostream>
using namespace std;
#define TOTAL 500

class Student
{
	string name;
	int age;
	double totalMarks;
	public:
		// Default Consructor
		Student(){}
		Student(string n, int a, double t) : name(n), age(a), totalMarks(t){}
		double get_percent()
		{
			return ((totalMarks / TOTAL) * 100);
		}
		void show_result()
		{
			cout << "Following are the student details: " << endl;
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Percent: " << get_percent() << " %" << endl;
		}
};

int main()
{
	Student s1("Rick", 65, 490);
	s1.show_result();
	return 0;
}