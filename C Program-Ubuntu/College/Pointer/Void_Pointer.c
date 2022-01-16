/*This program points at any data type using single void pointer*/
#include <Stdio.h>

int main()
{
    int a = 10;
    float b = 10.5;
    char ch = 'G';
    void *v_ptr;

    v_ptr = &a;     //Straight forward Refrencing 
    printf("Integer is: %d\n", *((int *)v_ptr));        //Include data type while Derefrencing

    v_ptr = &b;
    printf("Float is: %f\n", *((float *)v_ptr));

    v_ptr = &ch;
    printf("Character is: %c", *((char *)v_ptr));
}