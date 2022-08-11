// Program to demonstrate classes and objects
#include <iostream>
using namespace std;

class Astronaut
{
	string name;
	int id;
	string role;
	public:
		void input()
		{
			cout << "Enter astronaut name: ";
			getline(cin, name);
			cout << "Enter id: ";
			cin >> id;
			cin.ignore();
			cout << "Enter role: ";
			getline(cin, role);
		}
		void display()
		{
			cout << "Initiating Astronaut Data..." << endl;
			cout << "Astronaut's name: " << name << endl;
			cout << "ID Number: " << id << endl;
			cout << "Role: " << role << endl;
		}
};

int main()
{
	Astronaut astro;
	astro.input();
	astro.display();
	return 0;
}