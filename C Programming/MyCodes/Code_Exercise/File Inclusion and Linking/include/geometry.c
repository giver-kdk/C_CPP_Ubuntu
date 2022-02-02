#include "constants.h"

int findSquareArea(int length)
{
	int Area = length * length;
	return (Area);
}
int findRectangleArea(int length, int breadth)
{
	int Area = length * breadth;
	return (Area);
}
int findCircleArea(int radius)
{
	int Area = PI * radius * radius;
	return (Area);
}