#include <stdio.h>
#include <conio.h>

/*This program passes array name to pass all its elements to array argument of called function*/
void display_array(int number[]);           //This fx has array argument 
//----NOTE----No need to mention size for 1D Array unlike 2D Array

int main()
{
    int num[5]= {5, 7, 8, 9, 10};
    printf("The elements of array is: ");

    display_array(num);            //Passes name of array((Passes all elements of array at a time)
}
void display_array(int number[])      //number[] = num = {5, 7, 8, 9, 10}
{
    int i;
    for(i=0; i<=4; i++)
    {
        printf("\n%d", number[i]);
    }
}