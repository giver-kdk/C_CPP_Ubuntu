//Program to convert decimal to binary 
#include <stdio.h>
#include <conio.h>

void main()
{
long int decnum, binnum, rev=0, q=1, rem, i=1;
printf("\nEnter decimal number:\t");
scanf("%ld", &decnum);

	while(q!=0)
    {
        q = decnum / 2;
        rem = decnum % 2;
        decnum = q;
        rev = rev + rem*i;
        i = i * 10;
    }
printf("\nThe corresponding binary number is:%ld", rev);
getchar();
}
