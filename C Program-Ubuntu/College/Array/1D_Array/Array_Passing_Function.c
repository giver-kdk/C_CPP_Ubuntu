#include <stdio.h>
#include <conio.h>

/*This program passes element of array from function call by Value*/
int display_array(int num);

int main()
{
    int i, a[]= {5, 7, 8, 9, 10};
    printf("Entered number is: ");
    for(i=0; i<=4; i++)
    {
        display_array(a[i]);            //Passes one array element a[i] at a time
    }
}
int display_array(int num)      //'num' equivalent to element a[i]
{
    printf("\n%d", num);
}