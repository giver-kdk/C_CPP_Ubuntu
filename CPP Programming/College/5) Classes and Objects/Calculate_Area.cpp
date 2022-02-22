// Program to return area of a Rectangle
#include <iostream>
using namespace std;

class Rectangle
{
	public:
		double length;
		double breadth;
		void set_length(double num);
		void set_breadth(double num);
		double get_length();
		double get_breadth();
		double get_area();
};

int main()
{
	Rectangle r1;
	cout << r1.get_length() << endl;
	double num1, num2;
	cout << "Enter length and breadth: ";
	// Takes both input at same time using 'cin'
	cin >> num1 >> num2;
	r1.set_length(num1);
	r1.set_breadth(num2);
	cout << "Length is: " << r1.get_length() << endl;
	cout << "Breadth is: " << r1.get_breadth() << endl;
	cout << "Area is: " << r1.get_area() << endl;
	return 0;
}
void Rectangle :: set_length(double num)
{
	length = num;
}
void Rectangle :: set_breadth(double num)
{
	breadth = num;
}
double Rectangle :: get_length()
{
	return length;
}
double Rectangle :: get_breadth()
{
	return breadth;
}
double Rectangle :: get_area()
{
	return (length * breadth);
}
