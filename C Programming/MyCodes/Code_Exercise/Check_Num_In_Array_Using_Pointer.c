/*This program checks whether an array contains the entered number or not using pointer arithmetic wherever possible*/
#include <stdio.h>

int contains(int *a, int n, int num);

int main()
{
    int number, size, i, result;
    int array[] = {1, 2, 3, 4, 5};

    size = sizeof(array)/sizeof(array[0]);
    printf("Enter any number of your choice: ");
    scanf("%d", &number);

    result = contains(array, size, number);

    if(result)          //Here, simply writing result will work. If result = 1, then it means True 
    {
        printf("The Array contains the entered number %d", number);
    }
    else
    {
        printf("The Array doesn't contain the entered number %d", number);
    }
}
int contains(int *a, int n, int num)
{
    int i;
    for(i = 0; i < n; i++)
    {   //Check whether number matches array element
        if(*(a + i) == num)         //*(a + i) = a[i] 
        {
            return 1;
        }
    }
    return 0;
}