#include <stdio.h>
#include <conio.h>

/*This program says whether a number is positive, negative or zero*/
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if(a>=0)
    {
        if(a>0)
        {
            printf("Entered number is positive.");
        }
        else
        {
           printf("Entered number is zero."); 
        }
    }
    else
    {
        printf("Entered number is negative.");
    }
    getchar();

}