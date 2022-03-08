#include<iostream>
#include<string>
using namespace std;

class Engine
{
    string fuel_type;
    int stroke;
    int rpm;
    public:
        Engine(string f, int s, int r) : fuel_type(f), stroke(s), rpm(r) {}
        void get_engine_info();
};
void Engine :: get_engine_info()
{
	cout << "The engine details are: " << endl;
	cout << "Fuel Used: " << fuel_type << endl;
	cout << "Total Strokes: " << stroke << endl;
	cout << "Motor RPM: " << rpm << endl;
}
class Vehicle
{
    string name;
    double price;
    string manufacturer;
    public:
        Vehicle(string n, double p, string m) : name(n), price(p), manufacturer(m){}
        void get_vehicle_info();
};
void Vehicle :: get_vehicle_info()
{
	cout << "Name: " << name << endl;
	cout << "Price: Rs " << price << " Crore" << endl;
	cout << "Manufacturer: " << manufacturer << endl;
}
class vehicle_2_wheeler : public Vehicle
{
    int piston;
    public:
		Engine *eng1;
		// This is called 'has a relation'(Aggregation)
        vehicle_2_wheeler(string n, double p, string m, int pi, Engine *e1) : Vehicle(n, p, m), piston(pi), eng1(e1){}
        void getFullvehicle2()
        {
            cout << "Information about two wheeler: " << endl;
            cout << "Number of piston : " << piston << endl;
			get_vehicle_info();
			eng1->get_engine_info();
        }
};
class vehicle_4_wheeler : public Vehicle
{
    int row;
    public:
		Engine *eng2;
        vehicle_4_wheeler(string n, double p, string m, int r, Engine *e2) : Vehicle(n, p, m), row(r), eng2(e2){}
        void getFullvehicle4()
        {
            cout << "Information about four wheeler: " << endl;
            cout << "No. of seats it have: " << row << endl;
			get_vehicle_info();
			eng2->get_engine_info();
        }
};
int main()
{
    Engine engine1("Petrol", 2, 2000);
    Engine engine2("Diesel", 4, 3000);
    vehicle_2_wheeler vehicle_2_wheeler1("E-Bike", 0.2, "suzuki", 2, &engine1);
    vehicle_4_wheeler vehicle_4_wheeler1("Model X", 2.75, "Ford", 4, &engine2);
    vehicle_2_wheeler1.getFullvehicle2();
	cout << endl;
    vehicle_4_wheeler1.getFullvehicle4();
}
