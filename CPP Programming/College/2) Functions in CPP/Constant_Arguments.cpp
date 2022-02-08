// Sometime, we may not want to change the value of avariable inside specific function.
// In that case, a constant argument can be implemented
#include<iostream>
using namespace std;

int find_area(int length, const int breadth = 2)
{
	int area = length *  breadth;
	return area;
}
int main()
{
	int l = 5, b = 3, result;
	result = find_area(l, b);
	cout << result << endl;
	return 0;
}