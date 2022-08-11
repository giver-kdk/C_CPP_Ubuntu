/*This program sorts the array elements in ascending order using bubble sorting(Clz)*/
#include <stdio.h>

int bubble_sort(int b[], int n);
int main()
{
    int  i, array[5] = {8, 9, 3, 2, 1};
    bubble_sort(array, 5);
    //Output
    printf("The ascending order is: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
}
int bubble_sort(int b[], int n)
{
    int i, j, temp;
     //Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < (n - i) - 1; j++)
        {
            if(b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];//Here, changes made in 'b[j]' is automatically reflected in 'array[5]'
                b[j + 1] = temp; 
            }
        }
    }
}