#include <stdio.h>
#include <conio.h>

/*This program shows elements of array can be passed through reference function call.
By using pointer variable*/
int display_array(int *num);

int main()
{
    int i, a[]= {5, 7, 8, 9, 10};
    printf("Entered number is: ");
    for(i=0; i<=4; i++)
    {
        display_array(&a[i]);            //Passes one array element address at a time
    }
}
int display_array(int *num)      //'*num' equivalent to address of element a[i]
{
    printf("\n%d", *num);       //Prints element inside the address
    //printf("\n%d", num);     //Prints address of the element
}