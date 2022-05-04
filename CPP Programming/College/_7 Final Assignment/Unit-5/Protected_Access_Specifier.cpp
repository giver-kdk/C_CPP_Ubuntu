// Program to show the use of protected access specifier
#include <iostream>
using namespace std;

class Vehicle
{
	protected:
		double speed;
		double price;
	public:
		Vehicle(double s, double p) : speed(s), price(p){}
		void display()
		{
			cout << "Vehicle Speed: " << speed << " KM/Hrs" << endl;
			cout << "Price: " << price << " Crore"<< endl;
		}
};
class FourWheel : protected Vehicle
{
	protected: 
		string name;
		string airbag_material;
	public:
		FourWheel(double s, double p, string n, string a) : Vehicle(s, p), name(n), airbag_material(a){}
		void show()
		{
			display();
			cout << "Name: " << name << endl;
			cout << "Airbag Material: " << airbag_material << endl;
		}
};
int main()
{
	FourWheel car(300, 2.4, "Bugatti", "Nilon");
	car.show();
	return 0;
}