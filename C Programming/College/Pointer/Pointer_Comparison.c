/*This program compares two pointers pointing to same data type variable*/
#include <stdio.h>

int main()
{
    float a = 10.5, b = 10.5;
    float *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    if(ptr1 < ptr2)
    {
        printf("%u is less than %u", ptr1, ptr2);
    }
    if(ptr1 > ptr2)
    {
        printf("%u is greater than %u", ptr1, ptr2);
    }
    if(ptr1 == ptr2)        //Only possible if pointed to same variable
    {
        printf("\nIMPOSSIBLE!");
    }
    printf("\nptr1 - ptr2 = %d", ptr1 - ptr2);
}