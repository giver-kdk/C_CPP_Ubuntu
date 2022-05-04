#include<iostream>
using namespace std;

inline void display(int num)
{
	cout << num << endl;
}
inline int greater_num(int a, int b)
{
	return (a > b ? a : b); 
}

int main()
{
	int number = 5;
	int x = 5, y = 6;
	display(number);
	cout << "Greatest number is " << greater_num(x, y) << endl;
	return 0;
}