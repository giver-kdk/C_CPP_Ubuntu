// Program to demonstrate use of array with classes. It's quite similar to using arrays with structure.
#include <iostream>
using namespace std;

class Student
{
	private:
	// Array variable
		int marks[10];
		int subjectsNum = 5;
	public:
		string name;
		int roll;
		void input_detail();
		void find_percentage();
		void display_details();
};
int main()
{
	Student st1;
	st1.input_detail();
	st1.display_details();
	st1.find_percentage();
	return 0;
}

void Student :: input_detail()
{
	cout << "Enter Student name: ";
	getline(cin, name);
	cout << "Enter roll number: ";
	cin >> roll;
	cout << "Enter the number of subjects: ";
	cin >> subjectsNum;
	int i;
	for(i = 0; i < subjectsNum; i++)
	{
		cout << "Enter marks in subject " << i + 1 << ": ";
		// Storing data on 'ith' index of array
		cin >> marks[i];
	}
}
void Student :: find_percentage()
{
	int i;
	float total = 0, percentage;
	for(i = 0; i < subjectsNum; i++)
	{
		total = total + marks[i];
	}
	percentage = total / subjectsNum;
	cout << "Total Marks Obtained: " << total << endl;
	cout << "Scored Percentage: " << percentage << "%" << endl;
}
void Student :: display_details()
{
	cout << "Name: " << name << endl;
	cout << "Roll No.: " << roll << endl;
	int i;
	for(i = 0; i < subjectsNum; i++)
	{
		// Accessing 'ith' index of array
		cout << "Marks in subject " << i + 1 << ": " << marks[i] << endl;
	}

}
