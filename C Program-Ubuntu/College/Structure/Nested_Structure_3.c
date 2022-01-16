/*This program uses nested structure in another way*/
#include <stdio.h>

struct student
{
    char name[20];
    struct gender
    {
        char g;
        struct address
        {
            char address[20];
        }add_num1, add_num2, add_num3;
    }g1, g2, g3;
}s1, s2, s3;

int main()
{
    struct student s2, s3;
    printf("\nEnter 1st address: ");
    scanf("%s", &s1.g1.add_num1.address);
    printf("\nEnter 2nd address: ");
    scanf("%s", &s2.g2.add_num2.address);
    printf("\nEnter 3rd address: ");
    scanf("%s", &s3.g3.add_num3.address);

    printf("\n1st address is: %s", s1.g1.add_num1.address);
    printf("\n2nd address is: %s", s2.g2.add_num2.address);
    printf("\n3rd address is: %s", s3.g3.add_num3.address);
}