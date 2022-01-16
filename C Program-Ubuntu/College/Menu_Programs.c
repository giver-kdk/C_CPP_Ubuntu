#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int find_prime();
int check_positivity();
int check_odd();
int find_fibonacce();
int find_factorial();

int main()
{
    int num;
    printf("What do you want to do?\n");
    printf("1) Prime or Not\t 2) Positive or Negative\t3) Odd or Even\t 4) Fibonacce\t 5) Factorial\t 6) Exit: ");
    scanf("%d", &num);
    switch(num)
    {
        case 1: 
            find_prime();
            break;
        case 2:
            check_positivity();
            break;
        case 3:
            check_odd();
            break;
        case 4:
            find_fibonacce();
            break;
        case 5:
            find_factorial();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid Choice! ");
    }
}
int find_prime()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    i=2;                          
    while(i<=num-1)       
    {
        if(num%i==0)       
        {
            printf("Not a prime");  
            break;           
        }
        i=i+1;              
                
    }
    if(i==num)      
    {
        printf("Prime");       
    }
}
int check_positivity()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num>0)                                  
    {
        printf("Entered number is positive");

    }
    else
    {
        printf("Entered number is negative");
    }
}
int check_odd()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(num%2==0)                
    {
        printf("Entered number is even");

    }
    else                               
    {
        printf("Entered number is odd");
    }
}
int find_fibonacce()
{
    int i=1, a=1, b=1, c, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    do{
        printf("%d\t", a);
        c= a+b;
        a=b;
        b=c;
        
        i=i+1;

    }while(i<=n);
}
int find_factorial()
{
    int i, n, fac=1;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)           
    {
        fac=fac*i;             
        
    }
    printf("Factorial is %d", fac);
}