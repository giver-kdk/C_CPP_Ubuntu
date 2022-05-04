// Program to demonstrate use of destructor
#include <iostream>
using namespace std;

class Lamborgini
{
	string model;
	double speed;
	double thrust;
	public:
		Lamborgini()
		{
			cout << "Lambo Created!!!"  << endl;
		}
		~Lamborgini()
		{
			cout << "Lambo Destroyed!!!"  << endl;
		}
};

int main()
{
	{
		cout << "Start of scope" << endl;
		Lamborgini car1, car2;
		cout << "End of scope" << endl;
	}
	cout << "Program End" << endl;
	return 0;
}