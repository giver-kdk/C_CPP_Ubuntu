// Progam to demonstarte function overriding
#include <iostream>
using namespace std;

class Astronaut
{
	protected:
		string name;
		double oxygen;
	public:
		Astronaut(string n, double o2) : name(n), oxygen(o2){}
		virtual void display_oxygen_level()
		{
			cout << "Function is not defined" << endl;
		}
};
class Commander : public Astronaut
{
	public:
		Commander(string n, double o2) : Astronaut(n, o2){}
		// Function Overriding
		void display_oxygen_level()
		{
			cout << "Astronaut Name: " << name << endl;
			cout << "Oxygen Level: " << oxygen << " psi" << endl;
		}
};

int main()
{
	Astronaut *pilot;
	Commander astro("Cooper", 4.3);
	pilot = &astro;
	pilot->display_oxygen_level();
	return 0;
}