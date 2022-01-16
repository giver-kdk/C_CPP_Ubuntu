/*Size of operator for pointer*/
#include <stdio.h>

int main()
{
    char *ptr;
    printf("%d\t%d", sizeof(*ptr), sizeof(ptr));    
}