// Pogram to show default, parameterized and copy constructor.
#include <iostream>
using namespace std;

class Planet
{
	string name;
	double gravity;
	double mass;
	public:
		Planet()
		{
			cout << "Boom...Planet has been created!!!" << endl;
		}
		Planet(string n, double g, double m) : name(n), gravity(g), mass(m){}
		Planet(Planet &obj)
		{
			name = obj.name;
			gravity = obj.gravity;
			mass = obj.mass;
		}
		void explore()
		{
			cout << "Planet Description: " << endl;
			cout << "Planet Name: " << name << endl;
			cout <<"Gravity: " << gravity << " m/s^2" << endl;
			cout << "Mass: " << mass << " * 10^23 Kg" << endl;
		}
};

int main()
{
	Planet X;
	Planet X2("Mars", 3.72, 6.39);
	Planet X3 = X2;
	X2.explore();
	X3.explore();
	return 0;
}