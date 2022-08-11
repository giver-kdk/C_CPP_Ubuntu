// Program to demonstrate public and private inheritance
#include <iostream>
using namespace std;

class Parent
{
	string name;
	public:
		int age;
		Parent(string n, int a) : name(n), age(a){}
		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};
class Child1 : public Parent
{
	double weight;
	public:
		Child1(string n, int a, double w) : Parent(n, a), weight(w){}
		void show()
		{
			display();
			cout << "Child 1 Weight: " << weight << " KG" << endl;
		}
};
class Child2 : private Parent
{
	double weight;
	public:
		Child2(string n, int a, double w) : Parent(n, a), weight(w){}
		void show()
		{		
			display();	
			cout << "Child 2 Weight: " << weight << " KG" << endl;
		}
};

int main()
{
	Child1 ch1("Ram", 16, 60);
	Child2 ch2("Hari", 18, 65);
	ch1.age = 17;
	ch1.show();
	ch2.show();
	return 0;
}