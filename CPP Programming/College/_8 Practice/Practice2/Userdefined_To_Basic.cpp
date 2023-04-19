#include <iostream>
using namespace std;

class Kilogram
{
	int value;
	public:
		Kilogram(){}
		Kilogram(int v) : value(v){}
		operator int()
		{
			return (value * 1000);
		}
		void display()
		{
			cout << "Kilogram: " << value << endl;
		}
};

int main()
{
	Kilogram wt(50);
	int gram = wt;
	wt.display();
	cout << "Gram: " << gram << endl;
	return 0;
}