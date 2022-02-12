// Program to check binary numbers and also find one's compliment
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class binary
{
	private:
		string str;
		void checkBinary();
	public:
		void readData();
		void display();
		void onesComp();
}b1;

int main()
{
	b1.readData();
	b1.display();
	b1.onesComp();	
	return 0;
}
void binary :: checkBinary()
{
	int i;
	for(i = 0; i < str.length(); i++)
	{
		if((str[i] == '1') || (str[i] == '0'))
		{
			continue;
		}
		else
		{
			cout << "Not Binary Number" << endl;
			exit(0);
		}
	}
	cout << "Input is Binary Number" << endl;
}

void binary :: readData()
{
	cout << "Enter any binary number: ";
	getline(cin, str);
	checkBinary();
}

void binary :: display()
{
	cout << "Your number is: " << str << endl;
}

void binary :: onesComp()
{
	int i;
	for(i = 0; i < str.length(); i++)
	{
		if(str[i] == '1')
		{
			str[i] = '0';
		}
		else
		{
			str[i] = '1';
		}
	}
	cout << "After One's compliment:" << endl;
	display();
}
