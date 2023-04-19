/*This Program shows that the auto variable is valid only inside its scope where it was declared*/
#include <stdio.h>
#include <conio.h>
void main()
{
int m=10;
printf("m=%d",m);
	{
        int mn=20;
        printf("\nmn=%d",mn);
	}
// printf("\nmn=%d", mn);               //'mn' will not be valid here outside the scope
printf("\nm=%d", m);
getchar();
}

