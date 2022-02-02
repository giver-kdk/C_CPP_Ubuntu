/*This program uses nested structure in standard way*/
#include <stdio.h>

struct student_mark
{
    int mark;
};
struct student
{
    int roll_num;
    char name[20];
    struct student_mark sm1, sm2, sm3;
};
int main()
{
    struct student s1, s2, s3;
    printf("\nEnter 1st mark: ");
    scanf("%d", &s1.sm2.mark);
    printf("\nEnter 2nd mark: ");
    scanf("%d", &s2.sm2.mark);
    printf("\nEnter 3rd mark: ");
    scanf("%d", &s3.sm3.mark);

    printf("\n1st Mark is: %d", s1.sm1.mark);
    printf("\n2nd Mark is: %d", s2.sm2.mark);
    printf("\n3rd Mark is: %d", s3.sm3.mark);
}