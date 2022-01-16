#include <stdio.h>
#include <conio.h>

void main(){
    int num;
    printf("Enter a number to be tested: ");
    scanf("%d", &num);
    if(num<0)                                   // If the condition=True, then statement within block is executed.
    {
        printf("Input number is negative.");
    }
    printf("\nDo one thing at a time.");
    getchar();

}
