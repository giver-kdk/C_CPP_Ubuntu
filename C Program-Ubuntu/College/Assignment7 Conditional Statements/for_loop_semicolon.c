#include <stdio.h>
#include <conio.h>

void main()
{
int a=10,b;

for(b=1;b<=10;b++);	  //semicolon in for loop implies wait
	{
	a++;
	}
printf("\na=%d\tb=%d", a, b);
getchar();
}
