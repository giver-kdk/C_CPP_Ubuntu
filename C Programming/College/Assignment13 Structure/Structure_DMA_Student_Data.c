/*This program uses array within structure to represent the marks in different subjects. 
Take the information for n number of students given by user dynamically and display their percentage.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SUB 5

struct student
{
    char name[20];
    float marks[SUB];
}*ptr;
int main()
{
    int num, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    float percentage[num], marks_sum;
    ptr = (struct student *) malloc(num * sizeof(struct student));
    if(ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(i = 0; i < num; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", ptr[i].name);
        printf("Enter student marks\n");
        marks_sum = 0;
        for(j = 0; j < SUB; j++)
        {
            printf("Marks in Subject %d: ", j + 1);
            scanf("%f", &ptr[i].marks[j]);
            marks_sum = marks_sum + ptr[i].marks[j];
        }
        percentage[i] = marks_sum / SUB;
    }
    printf("Student Detail: \n");
    for(i = 0; i < num; i++)
    {
        printf("For Student %d\n", i + 1);
        printf("Name: %s\n", ptr[i].name);
        printf("Percentage: %f\n", percentage[i]);
    }
}