#include <iostream>
using namespace std;

int main()
{
	int i, j, count;
	cout << "Prime Numbers from 1 to 300 are: " << endl;
	for(i = 1; i <= 300; i++)
	{
		count = 0;
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				count++;
			}
		}
		if(count == 2)
		{
			cout << i << endl;
		}
	}
	return 0;
}