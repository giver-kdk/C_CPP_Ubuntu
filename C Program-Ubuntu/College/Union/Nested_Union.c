/*This program uses nested union in another way*/
#include <stdio.h>

union student
{
    char name[20];
    union roll_number
    {
        int roll_num;
    }r1, r2, r3;
}s1;

int main()
{
    union student s2, s3;
    printf("\nEnter 1st Roll Number: ");
    scanf("%d", &s1.r1.roll_num);
    printf("\n1st Roll Number is: %d", s1.r1.roll_num);
    printf("\nEnter 2nd Roll Number: ");
    scanf("%d", &s2.r2.roll_num);
    printf("\n2nd Roll Number is: %d", s2.r2.roll_num);
    printf("\nEnter 3rd Roll Number: ");
    scanf("%d", &s3.r3.roll_num);
    printf("\n3rd Roll Number is: %d", s3.r3.roll_num);
}