#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll_num;
    float fee;
};

int main()
{
    struct student *ptr, *ptr1;
    ptr = (struct student *) malloc(sizeof(struct student));
    // ptr1 = (struct student *) calloc(1, sizeof(struct student));
    printf("Enter name of student: ");
    scanf("%s", ptr->name);
    printf("Enter the roll number: ");
    scanf("%d", &ptr->roll_num);
    printf("Enter the fee: ");
    scanf("%f", &ptr->fee);
    printf("Detail\n");
    printf("Name: %s\nRoll Number: %d\nFee: %f\n", (*ptr).name, (*ptr).roll_num, (*ptr).fee);
    printf("Name: %s\nRoll Number: %d\nFee: %f", ptr->name, ptr->roll_num, ptr->fee);
}