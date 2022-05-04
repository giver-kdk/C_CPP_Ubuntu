// Program to calculate area and perimeter of rectangle
#include <iostream>
using namespace std;

int main()
{
	int length, breadth, area, perimeter;
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter breadth of rectangle: ";
	cin >> breadth;
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	cout << "Area of rectangle is: " << area << "\n";
	cout << "Perimeter of rectangle is: " << perimeter << "\n";
	return 0;
}