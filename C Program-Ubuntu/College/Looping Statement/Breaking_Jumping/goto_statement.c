#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a<=5)
    {
        goto label;             //Jumps the control flow to predefined 'label'.
    }
    
    else    
    {
        printf("Hello World");
        printf("\nHello C Program");
        
    }
    exit(0);                    //Requests directly to the OS to terminate the program.
    label:
        printf("goto statement bye bye!");

}