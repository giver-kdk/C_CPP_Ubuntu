/*This program uses function pointer to point to different functions and call them.*/
#include <stdio.h>

void add(int x, int y);
void subtract(int m, int n);
int main()
{
    int a, b;

    void(*p)(int, int);         //Declares function pointer
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    p = add;                //Assigns address of add function to 'p'
    p(a, b);                //Calls the pointed function with parameters
    //NOTE: c = p(a, b) is invalid. Since,'void' pointer doesn't return integer
    p = subtract;           //Assigns address of subtract function to 'p'
    p(a, b);
}
void add(int x, int y)
{
    printf("First number is: %d\n", x);
    printf("Second number is: %d\n", y);
    printf("Addition of two numbers is: %d\n", x + y);
}
void subtract(int m, int n)
{
    printf("First number is: %d\n", m);
    printf("Second number is: %d\n", n);
    printf("Subtraction of two numbers is: %d\n", m - n);
    
}