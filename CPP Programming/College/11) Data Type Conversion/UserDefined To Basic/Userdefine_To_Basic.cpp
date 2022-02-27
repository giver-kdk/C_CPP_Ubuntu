// Program to demonstrate data conversion of one user-defined data type to another basic data type
#include <iostream>
using namespace std;

class Weight
{
	int kilogram;
	public:
		Weight(int kg):kilogram(kg){}
		operator float()			// operator data_type
		{
			float gm;
			gm = kilogram * 1000;
			return gm;
		}
		void display()
		{
			cout << "Weight in kilogram: " << kilogram << endl;
		}
};

int main()
{
	Weight w1(2);
	float gram = w1;
	w1.display();
	cout << "Weight in gram: " << gram << endl;
	return 0;
}