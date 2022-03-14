/* Write a C++ program to find the second largest number (or middle) among three numbers. */
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, secondLarge;
	cout << "Enter any 3 numbers: ";
	cin >> a >> b >> c;
	if((a > b) && (a > c))
	{
		if(b > c){secondLarge = b;}
		else{secondLarge = c;}
	}
	else if((b > a) && (b > c))
	{
		if(a > c){secondLarge = a;}
		else{secondLarge = c;}
	}
	else
	{
		if(a > b){secondLarge = a;}
		else{secondLarge = b;}
	}
	cout << "The second largest number is: " << secondLarge << endl;
	return 0;
}