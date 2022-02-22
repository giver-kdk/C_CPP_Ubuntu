// Program demonstrating dynamic initializing of class objects using contruction overloading
#include <iostream>
#define PI 3.1415
using namespace std;

class Area
{
	private:
		double length;
		double breadth;
		int len;
		double radius;
	public:
		Area(double a, double b);
		Area(int a);
		Area(double a);
};

Area :: Area(double a, double b)
{
	cout << "Area of rectanlge is: " << a * b << endl;
}
Area :: Area(int a)
{
	cout << "Area of square is: " << a * a << endl;
}
Area :: Area(double a)
{
	cout << "Area of circle is: " << PI * a * a << endl;
}

int main()
{
	Area a1(12.34, 10.56);				// Two 'double' parameters 
	Area a2(6);							// One 'int' parameter
	Area a3(5.36);						// One 'double' parameter
	return 0;
}