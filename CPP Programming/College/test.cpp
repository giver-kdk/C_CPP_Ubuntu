#include <iostream>
using namespace std;

class Complex;
class Calculator
{
public:
	int add(int a, int b)
	{
		return (a + b);
	}
	int sumComplex(Complex o1, Complex o2);
};
class Complex
{
	int a;
	int b;
	friend int Calculator ::sumComplex(Complex o1, Complex o2);

public:
	void set(int x, int y)
	{
		a = x;
		b = y;
	}
	void display()
	{
		cout << "a: " << a << "\t";
		cout << "b: " << b << endl;
	}
};

int Calculator :: sumComplex(Complex o1, Complex o2)
{
	return (o1.a + o2.a);
}

int main()
{
	Complex c1, c2;
	c1.set(5, 3);
	c1.display();
	c2.set(3, 4);
	c2.display();
	Calculator c;
	cout << "Sum of real parts of complex number: " << c.sumComplex(c1, c2) << endl;

	return 0;
}
