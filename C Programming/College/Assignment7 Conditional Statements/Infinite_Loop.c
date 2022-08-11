#include <stdio.h>
#include <conio.h>

void main()
{
int i;

	for(i=1; i<1; i++)              //Change i=1 into 0, then infinite loop starts.
		{
		printf("\nOh my god!!!");
		i--;
		}
getchar();
}
//NOTE: To terminate the infinite loop, press CTRL+ C in terminal!