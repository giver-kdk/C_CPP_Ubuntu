#include <iostream>
using namespace std;

int main()
{
	float principal, time, rate, SI;
	cout<<"Enter P, T and R: ";			// Perform write operation on standard output device
	cin>>principal;						// Perform read operation from standard input device
	cin>>time;
	cin>>rate;
	SI = (principal * time * rate) / 100;
	cout << "Simple Interest: "<<SI<<endl;
}