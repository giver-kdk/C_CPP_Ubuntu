#include <iostream>
using namespace std;

int main()
{
	int number, i, sum = 0;
	cout<<"Enter the value of n: ";
	cin>>number;
	for(i = 1; i <= number; i++)
	{
		sum = sum + i;
	}
	cout<<"Sum of N natural numbers is: "<<sum<<"\n";
}