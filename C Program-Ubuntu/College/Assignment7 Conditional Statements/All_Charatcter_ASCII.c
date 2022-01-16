#include <stdio.h>
#include <conio.h>

/*This program prints all the ASCII value of all characters.*/
void main()
{
unsigned char c;
c='\0';
printf("\nThe ASCII value of %c is %d", c, c);
while(c!=255)
	{
	c++;
	printf("\nThe ASCII value of %c is %d", c, c);
	}
getchar();
}
