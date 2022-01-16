#include <stdio.h>

/*This program shows whether a number is Prime or not.*/
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    i=2;                          
    while(i<=num-1)         //Condition set as so to avoid 'i' being incremented to value equal to 'num'.
    {
        if(num%i==0)        //Checks if 'num' is even or not at 1st execution.
        {
            printf("Not a prime");  //Even number can't be Prime. So, prints 'Not Prime'.
            break;           
        }
        i=i+1;              //'i' increments if 'num' is not divisible by current value of 'i'.
                //Again 'if' statement divides 'num' by 'i' until i<=num-1 to check divisibility of 'num'.
    }
    if(i==num)      //If 'num' isn't divided by any number from 2 to num-1, then control flows here.
    {
        printf("Prime");        //Since, 'i' is incremented till 'num' to break loop. So, prints 'Prime"
    }
        
}