#include <stdio.h>

/*This program prints Upper Triangular Pyramid*/
int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        //Print empty spaces
        for(j=1; j<=5-i; j++)       //Number of spaces(looping) contolled by 'i'.
        {
            printf("\t");
        }
        //Print pyramid stars
        for(k=1; k<=2*i-1; k++)       //Number of stars controlled by 'i'.For the row i==2, (2*i-1)=3.
                                    //So, star prints 3 times at 2nd row of outer loop & so on.
        {
            printf("*\t");
        }
        printf("\n");
    }

}