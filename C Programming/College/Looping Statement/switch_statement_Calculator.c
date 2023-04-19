#include <stdio.h>

/*This program simulates Calculator with repeating input option.*/
int main()
{
    int a, b, op;
    char ch;
    
    while(ch!='x')          //Loop is exited when 'ch'=='x'.
    {
        printf("Enter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("\n 1 for Addition\t 2 for Subtraction\t 3 for Multiplication\t 4 for Division\t 5 for Remainder: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("The sum is %d", a+b);
                break;
            case 2:
                printf("The difference is %d", a-b);
                break;
            case 3:
                printf("The multiplication is %d", a*b);
                break;
            case 4:
                printf("The division is %d", a/b);
                break;
            case 5:
                printf("The remainder is %d", a%b);
                break;
            default:
                printf("Invalid Operation!");
        }
        printf("\nPress any key to continue\t Press X to exit: ");
        scanf(" %c", &ch);
    }
}