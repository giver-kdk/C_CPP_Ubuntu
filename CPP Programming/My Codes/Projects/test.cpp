#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	// Data and Addresses initialized higher than 256(8-bit)
	int byte, num[10] = {0}, number = 0, data = 0x111, addressHigh = 0x111, addressLow = 0x111, flag = 1;
	int i = 0, j = 0, k = 0;
	string code1 = "0H", subCode1, subCode2; 
	subCode1.resize(5);
	subCode2.resize(5);
	// Remove all unneccessary zeros
	while(flag == 1)
	{
		if((code1[0] == '0'))
		{code1.erase(0, 1);}
		else{flag = 0;}
	}
	// If operand is in hexa decimal, convert into integer and store
	if((code1.back() == 'h') || (code1.back() == 'H'))
	{
		code1.pop_back();
		// Convert string into exact number
		istringstream intValue(code1);
		intValue >> hex >> number;
		cout << number << endl;
	}
	// If operand is in decimal, directly store
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
	}
	if(number > 255)
	{
		byte = 3;
		int count = 0;
		// Separate the address parts into two
		for(i = 0; i < code1.length(); i++)
		{
			if(i < (code1.length() - 2))
			{
				subCode1[j] = code1[i];
				j++;
			}
			else
			{
				subCode2[k] = code1[i];
				k++;
			}
		}
		subCode1[j] = '\0';
		subCode2[k] = '\0';
		// Convert separated string into hex value
		subCode1.pop_back();
		istringstream higherValue(subCode1);
		higherValue >> hex >> addressHigh;

		subCode2.pop_back();
		istringstream lowerValue(subCode2);
		lowerValue >> hex >> addressLow;
	}
	else
	{
		byte = 2;
		data = number;
	}
	cout << hex << uppercase << data << endl;
	cout << hex << uppercase << addressHigh << endl;
	cout << hex << uppercase << addressLow << endl;
	cout << setw(2) << setfill('0') << hex << uppercase << number << endl;
	cout << byte << endl; 
	return 0;
}