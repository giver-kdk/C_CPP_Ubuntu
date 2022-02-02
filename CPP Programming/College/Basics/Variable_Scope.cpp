#include <iostream>
using namespace std;
int x = 45;					// Global Variable

int main()
{
	int x = 50;				// Local Variable
	// Inside this scope, local variable is gievn higher priority
	cout<<x<<endl;
	// Using scope resolution operator(::), global variable is used
	cout<<::x<<endl;	
}