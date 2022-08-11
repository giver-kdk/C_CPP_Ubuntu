// Program to demonstrate the abstract class ad pure virtual function 
#include <iostream>
using namespace std;

class Shape
{
	int length;
	int breadth;
	public:
		// Pure Virtual Function
		Shape(int l, int b) : length(l), breadth(b){}
		virtual void display_dimension() = 0;
		int get_area()
		{
			return (length * breadth);
		}
};
class Cuboid : public Shape
{
	int height;
	public:
		Cuboid(int l, int b, int h) : Shape(l, b), height(h){}
		void display_dimension()
		{
			cout << "Dimension of cuboid: " << get_area() * height << endl;
		}
};

int main()
{
	Shape *obj;
	Cuboid c1(10, 20, 5);
	obj = &c1;
	obj->display_dimension();
	return 0;
}

