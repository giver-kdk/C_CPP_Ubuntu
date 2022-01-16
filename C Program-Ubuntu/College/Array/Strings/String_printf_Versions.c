#include <stdio.h>

int main()
{
    char name[50] = "Giver Khadka";
    printf("%12s\n", name);
    printf("%7s\n", name);
    printf("%12.5s\n", name);
    printf("%12.0s\n", name);
    printf("%-12s\n", name);
    printf("%.3s\n", name);
    printf("%*.*s\n", 12, 3, name);
    // printf("%15s\n", name);
}