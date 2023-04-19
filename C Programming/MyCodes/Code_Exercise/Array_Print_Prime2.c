/*This program takes integer array as inout and then only prints back prime numbers using counting method*/
#include <stdio.h>
#define size 10                 

int main()
{
    int array[size], i, j, count;
    printf("Enter any %d array elements: ", size);
    for(i = 0; i <= size - 1; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i <= size - 1; i++)          //Loop for all array elements
    {
        //Check and print prime array element
        count = 0;
        for(j = 1; j <= array[i]; j++)
        {
            if(array[i] % j == 0)
            {
                count++;                    //'count' increments everytime when array element exactly divisible by 'j'
            }
        }
        if(count == 2)                      //Prime number is only divisible by 1 and by itself. So, count = 2
        {
            printf("%d\t", array[i]);
        }
    }

}