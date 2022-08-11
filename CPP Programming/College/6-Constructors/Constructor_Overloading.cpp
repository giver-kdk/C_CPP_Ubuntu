// Program to demostrate constructor overloading as similar to function overloading
#include <iostream>
using namespace std;

class Area
{
	private:
		int length;
		int breadth;
		double radius;
	public:
		// Constructors with different parameters overload each other
		Area()
		{
			length = 0;
			breadth = 0;
			radius = 0;
		}
		Area(int len)
		{
			length = len;
			breadth = 0;
			radius = 0;
		}
		Area(int len, int brd)
		{
			length = len;
			breadth = brd;
			radius = 0;
		}
		Area(double r)
		{
			radius = r;
			length = 0;
			breadth = 0;
		}
		void display_dimension()
		{
			cout << "Length: " << length << endl;
			cout << "Breadth: " << breadth << endl;
			cout << "Radius: " << radius << endl;
		}
};

int main()
{
	// Different constructors will get initialized with different parameters
	Area rect1;
	rect1.display_dimension();
	cout << endl;
	Area rect2(12, 13);
	rect2.display_dimension();
	cout << endl;
	Area rect3(10);
	rect3.display_dimension();
	cout << endl;
	Area cir1(2.5);
	cir1.display_dimension();
	return 0;
}