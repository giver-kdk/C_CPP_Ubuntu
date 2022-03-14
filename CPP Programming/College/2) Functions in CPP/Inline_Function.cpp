// Inline functions doesn't alter control flow but copy pastes the function content.
/*  - These are used for fast compiling.
	- Better to use with simple or one line of function code.
	- Not recommended to use if function has static variables, switch cases or other complexities.
	- Its just a request for compiler. It may or may not be treated as inline considering optimization*/
#include<iostream>
using namespace std;

inline void display(int num)
{
	cout << num << endl;
}
inline int greater_num(int a, int b)
{
	return (a > b ? a : b); 
}

int main()
{
	int number = 5;
	int x = 5, y = 6;
	// Since, display is inline. So, the 'display(number)' is replaced with 'cout << number << endl'
	display(number);
	cout << "Greatest number is " << greater_num(x, y) << endl;
	return 0;
}