// Program to demonstrate base class and derived class 
#include <iostream>
using namespace std;

class Person
{
	string name;
	int age;
	public:
		Person(string n, int a) : name(n), age(a){}
		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};
class CEO : public Person
{
	string company;
	int workerCount;
	public:
		CEO(string n, int a, string c, int w) : Person(n, a), company(c), workerCount(w){}
		void show()
		{
			display();
			cout << "Company Name: " << company << endl;
			cout << "Number of workers: " << workerCount << endl;
		}
};

int main()
{
	Person man("Cooper", 37);
	man.display();
	CEO legend("Elon Musk", 50, "SpaceX", 4000);
	legend.show();
	return 0;
}