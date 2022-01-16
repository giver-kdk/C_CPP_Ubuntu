#include <stdio.h>
#include <conio.h>
/*This program takes 3 nemerical inputs and displays the largest number using Nested if_else*/
/*If there are number of conditions to be checked, then Nested if_else is used.*/
void main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    if(a>b)                     //checks if a>b or not.
    {
        if(a>c)                 // if a>b==True, then this checks if a>c or not.
        {
            printf("a is the largest number");
        }
        else                    // if a>c==False, then this statement runs
        {
            printf("c is the largest number");
        }
    }
    else                        //if top if(a>b)==False, then this statement block runs
    {
        if(b>c)                 // if b>c==True, then this statement runs
        {
            printf("b is the largest number");
        }
        else                    //if b>c==False, then this statement runs
        {
            printf("c is the largest number");
        }
    }
    getchar();

}