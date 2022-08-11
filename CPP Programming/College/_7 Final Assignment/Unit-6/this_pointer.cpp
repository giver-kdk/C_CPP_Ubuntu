// Program to demonstrate the use of this pointer
#include <iostream>
using namespace std;

class Rectangle
{
	int length;
	int breadth;
	public:
		Rectangle(int length, int breadth)
		{
			this->length = length;
			this->breadth = breadth;
		}
		void dislay_area()
		{
			cout << "Area of rectangle: " << (this->length * this->breadth) << endl;
		}
};

int main()
{
	Rectangle object(10, 20);
	object.dislay_area();
	return 0;
}