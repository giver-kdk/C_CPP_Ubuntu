/*Program to demonstrate pointer substraction*/
#include <stdio.h>

int main()
{
    float array[] = {1, 2, 3, 4, 5};
    float *ptr1, *ptr2;
    ptr1 = array;
    ptr2 = array + 3;
    printf("ptr2 - ptr1 = %d\n", ptr2 - ptr1);    //Gives address block difference
    printf("ptr1 - ptr2 = %d", ptr1 - ptr2);     
}
/*NOTE: 
* -ve sign indicates 2nd pointer lies on RHS of 1st pointer on memory
* The data type of the variable pointed should be same*/