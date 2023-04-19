/*This program uses nested structure*/
#include <stdio.h>

struct student
{
    struct s_mark
    {
        int mark;
    }sm1, sm2, sm3;
}s1;
int main()
{
    struct student s2, s3;
    printf("\nEnter 1st mark: ");
    scanf("%d", &s1.sm1.mark);
    printf("\nEnter 2nd mark: ");
    scanf("%d", &s2.sm2.mark);
    printf("\nEnter 3rd mark: ");
    scanf("%d", &s3.sm3.mark);

    printf("\n1st Mark is: %d", s1.sm1.mark);
    printf("\n2nd Mark is: %d", s2.sm2.mark);
    printf("\n3rd Mark is: %d", s3.sm3.mark);
}