// Program to demonstrate a destructor being called when object is destroyed
// Destructors can be used to clear up dynamically allocated memeory after the entitiy is deleted
// Destructors can be used to perform specific task when an object is removed from the program
#include <iostream>
using namespace std;

class Number
{
	private:
		int num;
	public:
		// '~' Tilde before class name means destructor
		Number()
		{
			cout << "Object has been created!!!" << endl;
		}
		~Number()
		{
			cout << "Object has been destoyed..." << endl << endl;
		}
};

int main()
{
	cout << "Control reached at the top of program" << endl;
	Number n1;
	{
		cout << "Entering a scope" << endl;
		Number n2, n3, n4;
		cout << "Exiting the scope" << endl;
	}
	
	cout << "Control reached at the end of program" << endl;
	return 0;
} 