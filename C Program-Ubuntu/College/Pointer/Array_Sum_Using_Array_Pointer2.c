/*This program calculates sum of array elements using pointer only*/
#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4 , 5};
    int i, sum = 0, *ptr;
    ptr = array;                //Means ptr = &array[0]
    for(i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);       //ptr + i = &array[i]. So, use '*' for value
    }
    printf("Sum is : %d", sum);
}