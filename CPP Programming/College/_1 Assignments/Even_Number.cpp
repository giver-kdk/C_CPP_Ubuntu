// WAP to print evenn numberrs from 1 to 100 using do-while loop
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	do
	{
		if(i % 2 == 0)
		{
			cout << i << endl;
		}
		i++;
	} while (i <= 100);
	return 0;
}