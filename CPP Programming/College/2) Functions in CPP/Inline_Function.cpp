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
int main()
{
	int number = 5;
	// Since, display is inline. So, the 'display(number)' is replaced with 'cout << number << endl'
	display(number);
	return 0;
}