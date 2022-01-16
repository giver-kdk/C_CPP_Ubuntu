/*This program calculates sum of array elements using array pointer*/
#include <stdio.h>

int main()
{
    int i, sum = 0, array[5];
    printf("Enter any 5 elements:\n");
    //Input Array
    for(i = 0; i < 5; i++)
    {
        scanf("%d", (array + i));   //'array + i' = &array[i];
    }
    //Calculate sum
    for(i = 0; i < 5; i++)
    {
        sum = sum + *(array + i);       //array + i = &array[i]. So, use '*' for value
    }
    printf("Sum of entered elements is : %d", sum);
}