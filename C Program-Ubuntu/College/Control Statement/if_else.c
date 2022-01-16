#include <stdio.h>
#include <conio.h>
/*This program checks whether the number is even or odd using if_else statement*/
void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    /* 'if' condition checks whether number is divisible by two or not. If True then
    'if' statement run otherwise 'else' statement runs*/
    if(num%2==0)                
    {
        printf("Entered number is even");

    }
    else                                // only runs the body statemnt when 'if' condition is false
    {
        printf("Entered number is odd");
    
    printf("\nGoodBye");
    getchar();

}