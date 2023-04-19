/* Program to demonstrate the 'has a relation' between classes.
It means a class can reference other class objects if required. This reduces repeatation */ 
#include <iostream>
#include <string>
using namespace std;

// Create a general engine class
class Engine
{
    string fuel_type;
    int stroke;
    int rpm;

    public:
        // Constructor for engine class
        Engine(string f, int s, int r) : fuel_type(f), stroke{s}, rpm(r) {}
        void get_engine_info();
};
void Engine :: get_engine_info()
{
	cout << "The engine details are: " << endl;
	cout << "Fuel Used: " << fuel_type << endl;
	cout << "Total Strokes: " << stroke << endl;
	cout << "Motor RPM: " << rpm << endl;
}
// Create a vehicle class 
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

// Create a two wheeler derived from vehicle class
class TwoWheel : public Vehicle
{
    string chain_material;
    public:
		Engine *eng1;
		// This is called 'has a relation'(Aggregation)
        TwoWheel(string n, double p, string m, string c, Engine *e1) : Vehicle(n, p, m), chain_material(c), eng1(e1){}
        void get_two_wheel_info()
        {
            cout << "Information about two wheeler: " << endl;
            cout << "Chain Material : " << chain_material << endl;
			// Call parent method
			get_vehicle_info();
			// Call 'get_engine_info()' method of class object pointed by 'eng1'
			eng1->get_engine_info();			// '->' is class member access member
        }
};
// Create a general four wheeler derived from vehicle class
class FourWheel : public Vehicle
{
    string airbag_material;
    public:
		Engine *eng2;
        FourWheel(string n, double p, string m, string a, Engine *e2) : Vehicle(n, p, m), airbag_material(a), eng2(e2){}
        void get_four_wheel_info()
        {
            cout << "Information about four wheeler: " << endl;
            cout << "Airbag Material: " << airbag_material << endl;
			get_vehicle_info();
			eng2->get_engine_info();			// '->' is class member access member
        }
};

int main()
{
    // Create two different engines
    Engine engine1("Petrol", 2, 2000);
    Engine engine2("Diesel", 4, 3000);
	// Create different vehicles with different engines
    TwoWheel twoWheel1("Aero-Bike", 0.2, "BMW", "Steel", &engine1);
    FourWheel fourWheel1("Model X", 2.75, "Tesla", "Nylon", &engine2);
    twoWheel1.get_two_wheel_info();
	cout << endl;
    fourWheel1.get_four_wheel_info();
}
