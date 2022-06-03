#include <iostream>
using namespace std;

class Person
{
	public:
		Person(int num) : age(num){}
		mutable int age;
		void display() const
		{
			cout << "Age: " << age << endl;
		}
};

int main()
{
	const Person man(2);
	man.display();
	man.age = 3;
	man.display();
	return 0;
}