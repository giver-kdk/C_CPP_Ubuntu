#include <stdio.h>
#include <conio.h>
void main()
{
    int num, c;
    printf("Enter a number");
    scanf("%d", &num);
    c=~num;               //Converts 1 to 0 and vice versa
    printf("One's Compliment of the given number is %d", c);

}