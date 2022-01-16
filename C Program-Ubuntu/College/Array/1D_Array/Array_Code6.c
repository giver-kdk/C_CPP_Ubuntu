/*This program prints the address of array elements using array name*/
#include <stdio.h>

void main()
{
    int a[]= {5, 7, 8, 9, 10};
    int *j;
    j=a;                    //Address of 1st element 'a[0]' gets stored in pointer 'j'
    printf("\t%d", j);      //Prints address stored in 'j'

    j=j+ 1;                 //Address of 2st element 'a[1]' gets stored in pointer 'j'(Next address of Array)
    printf("\t%d", j);

    j=j+ 1;                 //Address of 3rd element 'a[2]' gets stored in pointer 'j'
    printf("\t%d", j);

    j=j+ 1;                 //Address of 4th element 'a[2]' gets stored in pointer 'j'
    printf("\t%d", j);

    j=j+ 1;                 //Address of 5th element 'a[2]' gets stored in pointer 'j'
    printf("\t%d", j);
    
}
/*NOTE: The name of array is itself acting as pointer pointing address of first element a[0]*/