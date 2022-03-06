#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int byte, num[10] = {0}, number = 0;
	string code1 = "255";
	string code2 = "2040H";
	if((code1.back() == 'h') || (code1.back() == 'H'))
	{
		code1.pop_back();
		if(code1.length() > 2)
		{
			byte = 3;
		}
		else
		{
			byte = 2;
		}
	}
	else
	{
		for(int i = 0; i < code1.length(); i++)
		{
			num[i] = code1[i];
			num[i] = num[i] - 48;
		}
		for(int i = 0; i < code1.length(); i++)
		{
			number = number * 10 + num[i];
		}
		// cout << setw(0) << hex << uppercase << number << endl;
		if(number > 255)
		{
			byte = 3;
		}
		else
		{
			byte = 2;
		}
	}
	cout << number << endl;
	cout << byte << endl;
	return 0;
}