#include <stdio.h>
#include <stdlib.h>

/*This program can find Prime Numbers, find Factorial and check Odd/Even.*/
int main()
{
    int n, choice, i, fac=1;
    char ch='y';
    
    start:                          //defines label
    
    printf("\nEnter any numbers:\n");
    scanf("%d", &n);
    printf("1 to find Prime Number: ");
    printf("\n2 to find Factorial: ");
    printf("\n3 to check Odd/Even: ");
    printf("\n4 to Exit:\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            i=2;                          
            while(i<=n-1)         //Condition set as so to avoid 'i' being incremented to value equal to 'n'.
            {
                if(n%i==0)        //Checks if 'n' is even or not at 1st execution.
                {
                    printf("Not a prime");  //Even number can't be Prime. So, prints 'Not Prime'.
                    break;           
                }
                i=i+1;              //'i' increments if 'n' is not divisible by current value of 'i'.
                        //Again 'if' statement divides 'n' by 'i' until i<=n-1 to check divisibility of 'n'.
            }
            if(i==n)      //If 'n' isn't divided by any number from 2 to n-1, then control flows here.
            {
                printf("Prime");        //Since, 'i' is incremented till 'n' to break loop. So, prints 'Prime"
            } 
            break;
        case 2:
            for(i=1;i<=n;i++) //condition is run the loop until 'i' is less than or equal to the entered number
            {
                fac=fac*i;             //assigning value to 'fac'
                
            }
            printf("Factorial is %d", fac);
            break;
        case 3:
            if(n%2==0)
            {
                printf("The number is Even");
            }
            else
            {
                printf("The number is Odd");
            }
            break;
        case 4:
            exit(0);             //Requests directly to the OS to terminate the program and reports '0' error.
                                    // exit(); should also run but not supported here.
            break;
        default:
            printf("Sorry! Invalid Choice...Enter 4 to exit! ");
    }

    printf("\nEnter y to continue: ");
    scanf(" %c", &ch);
    if(ch=='y')
    {
        goto start;             //Control jumps to 'start' label if ch=='y' is True.
    }
    
    
}
