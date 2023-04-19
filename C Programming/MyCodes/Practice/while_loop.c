#include <stdio.h>

/*This program shows the use of while loop . Use while loop when u dont know how many times to repeat the code.
while loop first checks the condition and then runs the body code*/
int main()
{
    int i;                          
    printf("Enter any number: ");
    scanf("%d", &i);                //initialization
    while(i<100)                // while(condition)
    {
        printf("%d\n", i);
        i=i+1;                  //update
    }
}