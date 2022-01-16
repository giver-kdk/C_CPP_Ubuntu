/*Program to accept 10 numbers and print sum of these numbers through function*/
#include <stdio.h>

int find_sum(int num);

int main()
{
    int i, number[10], result;
    printf("Enter any 10 numbers:\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d", &number[i]);
        result= find_sum(number[i]);            //'result' updates at every function call
    }
    printf("Sum of 10 numbers is: %d", result);
}
int find_sum(int num)
{
    static int sum=0;               //Static variable to preserve the value of 'sum'
    sum= sum+ num;
    return(sum);
}