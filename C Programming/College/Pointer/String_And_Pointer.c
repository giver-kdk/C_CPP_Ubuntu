#include <stdio.h>

int main()
{
    int i;  
    char name[] = "Giver Khadka";
    printf("String element\tAddress\n");
    for( i = 0; name[i] != '\0'; i++)       //Or, Condition: i < 12
    {
        printf("name[%d] = %c\t%u\n", i, name[i], &name[i]);
    }
    printf("String element\tAddress\n");
    for( i = 0; *(name + i) != '\0'; i++)
    {
        printf("name[%d] = %c\t%u\n", i, *(name + i), name + i);
    }
}