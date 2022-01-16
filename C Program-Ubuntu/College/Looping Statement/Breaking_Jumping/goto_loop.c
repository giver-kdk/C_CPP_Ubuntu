#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char ch='y', op;
    start:                          //defines label(function)
    {
        printf("Enter the two numbers:\n");
        scanf("%d%d", &a, &b);
        printf("'+' for Addition\t'-' for Subtraction\t'*' for Multiplication\t\t'/' for Division: ");
        scanf(" %c", &op);
        switch(op)
        {
            case '+':
                printf("The sum of two numners is %d", a+b);
                break;
            case '-':
                printf("The difference of two numbers is %d", a-b);
                break;
            case '*':
                printf("The product of two numbers is %d", a*b);
                break;
            case '/':
                printf("The division of two numbers is %d", a/b);
                break;
            default:
                printf("Sorry! Invalid Operation...");
        }
    }
    printf("\nEnter y to continue: ");
    scanf(" %c", &ch);
    if(ch=='y')
    {
        goto start;             //Control jumps to 'start' label if ch=='y' is True.
    }
    
}
