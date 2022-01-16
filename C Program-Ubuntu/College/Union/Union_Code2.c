#include <stdio.h>

union structure
{
    char name[10];
    int roll_num;
    char gender;
}us;
struct student
{
    char name[10];
    int roll_num;
    char gender;    
}ss;
int main()
{
    printf("Size of us: %d", sizeof(us));
    printf("\nSize of ss: %d", sizeof(ss));
}
