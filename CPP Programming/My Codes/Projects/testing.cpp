#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
	string finalOperand;
	int number = 2000;
	stringstream str_stream;  
	str_stream << hex<< number;  
	string stringNumber;  
	str_stream >> stringNumber;  
	finalOperand = stringNumber;
	cout << finalOperand << endl;
	cout << number << endl;
}
