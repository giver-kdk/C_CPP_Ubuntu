#include <stdio.h>

/*This program prints the multiplication table.*/
int main()
{
    int i, j;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)                //Number of looping depends upon condition(j<=10)
        {
            printf("%d * %d is: %d\n", i, j, i*j);      //Arithmetic Multiplication for output
        }
        printf("\n");
    }
}