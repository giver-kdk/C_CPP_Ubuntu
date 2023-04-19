// Program to check Binary numbers and also find one's compliment
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Binary
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
void Binary :: checkBinary()
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

void Binary :: readData()
{
	cout << "Enter any Binary number: ";
	getline(cin, str);
	checkBinary();
}

void Binary :: display()
{
	cout << "Your number is: " << str << endl;
}

void Binary :: onesComp()
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
