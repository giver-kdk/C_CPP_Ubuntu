// Program to calculate the result of student using constructors
#include <iostream>
using namespace std;

class student
{
	private:
		string name;
		int marks[3];
	public:
		student(string str, int i, int j, int k);
		int get_percent();
		void display();
};

int main()
{
	student s1("Ram", 90, 80, 75);
	s1.display();
	cout << "Percentage acquired: " << s1.get_percent() << endl;
	return 0;
}
student :: student(string str, int i, int j, int k)
{
	cout << "Constructor is called" << endl;
	name = str;
	marks[0] = i;
	marks[1] = j;
	marks[2] = k;
}
int student :: get_percent()
{
	int percent, total = 0, i;
	for(i = 0; i < 3; i++)
	{
		total = total + marks[i];
	} 
	percent = total / 3;
	return percent;
}
void student :: display()
{
	int i;
	cout << "Details of student are:" << endl;
	cout << "Name: " << name << endl;
	for(i = 0; i < 3; i++)
	{
		cout << "Marks in subject " << i + 1 << ": " << marks[i] << endl;
	} 
}
