// Program to override a base class function by derived class function
#include <iostream>
using namespace std;

class Parent
{
	public:
		void display()
		{
			cout << "Parent Function" << endl;
		}
};
class Child : public Parent
{
	public:
		void display()
		{
			cout << "Child Function" << endl;
		}
};
int main()
{
	Child c1;
	c1.display();				// Function overwritten here
	c1.Parent::display();
	return 0;
}