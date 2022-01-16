#include <stdio.h>

int do_addition(int x, int y); //Function Declaration
int do_subtraction(int x, int y);
int do_multiplication(int x, int y);

void main()
{
    int a;
    int b, addition, difference, multiplication;
    printf("Enter a number: ");
    scanf("%d%d", &a, &b);
    addition = do_addition(a, b);
    printf("The sum of two numbers is %d", addition);
    difference = do_subtraction(a, b);
    printf("\nThe difference of two numbers is %d", difference);
    multiplication = do_multiplication(a, b);
    printf("\nThe multiplication of two numbers is %d", multiplication);
}

int do_addition(int x, int y)
{
    float z;
    z = x + y;
    return (z);
}

int do_subtraction(int x, int y)
{
    int diff;
    diff = x - y;
    return (diff);
}

int do_multiplication(int x, int y)
{
    int multi;
    multi = x * y;
    return (multi);
}