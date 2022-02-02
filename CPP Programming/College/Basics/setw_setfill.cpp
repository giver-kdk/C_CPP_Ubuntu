#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"HELLO WORLD";
	// 'setw' and 'setfill' are C++ manipulators
	// 'setw' is used to reserve field width of output
	// 'setfill' is used to fill the blankspace with custom character
	cout<<setw(20)<<setfill('*')<<"Hello World"<<endl;			// Here, 20 charcters width is reserved for output
}