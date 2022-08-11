#include <iostream>
using namespace std;

// Base Class or Parent Class
class Parent
{
	int salary;
	public:
		int x;
	// Kind of private but can be inheritated by child
	protected:
		int b;
};
// Derived Class or Child Class
class Child : public Parent			// class Child_Class Access_Mode Parent_Class
{
	public:
		int y;
		void set_protected(int i)
		{
			b = i;
		}
		int get_protected()
		{
			return b;
		}
};

int main()
{
	Parent p;
	Child c;
	c.x = 10;						// Accessing parent variable
	c.y = 20;						// Accessing own variable
	c.set_protected(12);			// Allowed since, protected members can be inheritated
	// c.b = 30;					//Even though 'b' is inheritated but its a protected member(Acts as private outside the class)
	// c.salary = 20000;			// Not allowed since, private members can't be inheritated
	cout << "x: " << c.x << endl;
	cout << "y: " << c.y << endl;
	cout << "b: " << c.get_protected() << endl;
	p.y = 30;
	cout << "y: " << p.y << endl;

}