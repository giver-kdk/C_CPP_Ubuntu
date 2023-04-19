// Program to remove ambuigity in multipath inheritance
#include <iostream>
using namespace std;

class A
{
	public:
		int x;
		void show()
		{
			cout << "Vaue of X: " << x << endl;
		}
};
class B
{
	public:
		int y;
		void show()
		{
			cout << "Vaue of Y: " << y << endl;
		}
};
class C : public A, public B
{
	public:
		int z;
		C(int a, int b, int c)
		{
			x = a;
			y = b;
			z = c;
		}
		void display()
		{
			cout << "Vaue of Z: " << z << endl;
		}
};

int main()
{
	C obj(2, 3, 4);
	// Multiple Inheritance Ambuigity
	// obj.show();
	obj.A::show();			// Access 'show' function of class A
	obj.B::show();
	obj.display();
	return 0;
}