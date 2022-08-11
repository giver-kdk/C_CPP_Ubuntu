// Program to demonstrate the use of 'this' pointer which is used to refer the current instance 
#include <iostream>
using namespace std;

class Rectangle
{
	int length;
	int breadth;
	public:
		// Inline definition avoids logical error or similar variable name 
		// Rectangle(int length, int breadth) : length(length), breadth(breadth){}
		Rectangle(int length, int breadth)
		{
			// 'this->length' means 'length' member of the current class
			this->length = length + 1;
			this->breadth = breadth + 1;
		}
		void area()
		{
			cout << "Area of the rectagle: " << this->length * this->breadth << endl;
		}
		void display()
		{
			// cout << length << " " << breadth << endl;
			cout << this->length << " " << this->breadth << endl;
		}
};

int main()
{
	Rectangle r(10, 12);
	r.display();
	r.area();
	return 0;
}