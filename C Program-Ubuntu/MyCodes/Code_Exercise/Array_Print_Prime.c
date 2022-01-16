/*This program takes array integers as input, and then displays back only Prime Numbers*/
#include <stdio.h>
#define size 10
 int main()
 {
    int array[size], i, j, num;
    printf("Enter any 10 numbers: ");
    for(i=0; i <= size - 1; i++)            //Array input 
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i <= size - 1; i++)                          //Loop for all array elements
    { 
        //Checking and printing prime number
        for(num = 2; num <= array[i]; num++)              //Allows incrementing of 'num' from 2 to 'array[i]'
        {
            for(j = 2; j <= num - 1; j++)   
            {
                if(array[i] % j == 0)
                {
                    break;                  //'break' if array element is not prime
                }
            } 
            if(j == array[i])
            {
                printf("%d\t", array[i]);  //Only prints prime array element
            }  
        }
    }
 }