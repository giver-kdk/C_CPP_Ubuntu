#include <iostream>
using namespace std;

class Kilogram 
{
	int value;
	public:
		Kilogram(){}
		Kilogram(int v) : value(v){}
		int get_value()
		{
			return value;
		}
		void display()
		{
			cout << "Kilgram: " << value << endl;
		}
};

class Gram
{
	int data;
	public:
		Gram(){}
		Gram(int d) : data(d){}
		Gram(Kilogram obj)
		{
			data = obj.get_value() * 1000;
		}
		void show()
		{
			cout << "Gram: " << data << endl;
		}
};
int main()
{
	Kilogram wt1(50);
	Gram wt2 = wt1;
	wt1.display();
	wt2.show();
	return 0;
}