#include <stdio.h>

union student
{
    char name[10];
    int roll_num;
};
void main()
{
    union student s1;
    printf("Enter the name: ");
    scanf("%s", s1.name);
    printf("Name of students is: %s", s1.name);
    printf("\nEnter the roll number: ");
    scanf("%d", &s1.roll_num);
    printf("Roll number is: %d", s1.roll_num);
    // printf("Detail Info:\n");
    // printf("Name: %s\nRoll Number: %d", s1.name, s1.roll_num);          //Error: Only one union member can be assigned at a time
}