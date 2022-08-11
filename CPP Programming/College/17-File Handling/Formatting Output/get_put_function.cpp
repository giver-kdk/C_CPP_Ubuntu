// Program to use get and put function of cout
#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout <<"Enter any character: " <<endl;
	// Character input on screen
	cin.get(ch);
	cout << "You have entered: ";
	// Character output on screen
	cout.put(ch);
	cout << endl;
	return 0;
}