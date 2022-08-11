/* Program to display all prime numbers less than 100.*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;
    for(i = 2; i < 100; i++)            
    {
        for(j = 2;j <= i-1;j++)        
        {
            if(i%j == 0)           
            break;             
        }
        if(i == j)              
        printf("%d\n",i);    
    }
    getchar();
}