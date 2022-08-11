#include <stdio.h>
#include <conio.h>

/*This program adds up all the numbers until '0' is entered and shows final sum and average value.*/
int main()
{
    float a, i, sum=0, average;

    do{
    printf("Enter a number: ");         //takes input from user
    scanf("%f", &a);                    // saves input
    sum=sum+a;                          //adds input to the current value of 'sum'
    }while(a!=0);        //checks the condition, whether input is '0' or not ands loops if not zero.

    printf("Sum is %.3f", sum);
    average= sum/2;
    printf("\nAverage is %.3f", average);
}