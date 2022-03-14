// Program to print Complex number using constructors 
#include <iostream>
using namespace std;

class Complex
{
	private:
		int a;
		int b;
	public:
		Complex(int x, int y);			// Declaration of constructor
		void display();
};
int main()
{
	Complex num(2, 3);
	num.display();
	return 0;
}

Complex :: Complex(int x, int y)
{
	cout << "Constructor is initialized" << endl;
	a = x;
	b = y;
}
void Complex :: display()
{
	cout << "Complex number is: " << a << " + i." << b << endl; 
}
