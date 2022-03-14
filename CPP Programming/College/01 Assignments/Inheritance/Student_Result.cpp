// Program to print student result and info with application of inheritance
#include <iostream>
#define SIZE 3									// Number of subjects
using namespace std;

class Person									// Base Class
{
	string name;
	int age;
	public:
		Person(string name1, int age1)
		{
			name = name1;
			age = age1;
		}
		string get_name(){return name;}
		int get_age(){return age;}
};
class Student : public Person
{
	string collegeId;
	double marksObtained[SIZE];
	double total = 0, percentage;
	public:
		// Inline initialization of Base class constructor
		Student(string name2, int age2, string id) : Person(name2, age2), collegeId(id)
		{
			// Marks input and result calculation
			for(int i = 0; i < SIZE; i++)
			{
				cout << "Enter marks obtained in subject " << i + 1 << ": ";
				cin >> marksObtained[i];
				total = total + marksObtained[i];
			}
			percentage = total / SIZE;
		}
		void get_result();
};
int main()
{
	Student s1("Ram", 19, "123AB");				// Derived class object creation
	s1.get_result();
	return 0;
}
void Student :: get_result()
{
	// Accessing Base Class private data with it's public methods
	cout << "Name: " << get_name() << endl;
	cout << "Age: " << get_age() << endl;
	cout << "College ID: " << collegeId << endl;
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Marks obtained in subject " << i + 1 << ": " << marksObtained[i] << endl;
	}
	cout << "Total Marks: " << total << endl;
	cout << "Percent Score: " << percentage << " %" << endl;
}
