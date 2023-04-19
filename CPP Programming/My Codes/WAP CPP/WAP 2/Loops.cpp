#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
	do
	{
		cout << "Hello World" << endl;
		num--;
	}while(num != 0);
	return 0;
}