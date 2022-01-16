/*This program calls function by reference using pointer as argument on called function*/
#include <stdio.h>

void swap(int *a, int*b);

int main()
{
    int num1 = 10, num2 = 20;
    printf("Before the function call:\nnum1 = %d, num2 = %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter the function call:\nnum1 = %d, num2 = %d", num1, num2);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}