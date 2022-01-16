/*This program points at any data type using single void pointer*/
#include <Stdio.h>

int main()
{
    int num = 10;
    char ch = 'G';
    float number = 3.146;
    void *v_ptr;

    v_ptr = &num;
    printf("Integer is: %d\n", *((int *)v_ptr));

    v_ptr = &ch;
    printf("Character is: %c\n", *((char *)v_ptr));

    v_ptr = &number;
    printf("Float is: %f", *((float *)v_ptr));
}