/* Program to read 100 students record with fields (roll_no, name, class, and marks in 5
subjects) and display their records along with their percentage of marks obtained.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SUB 5
#define NUM 100

struct student
{
    char name[20];
	int roll_no;
	int class;
    float marks[SUB];
}std[NUM];

int main()
{
    int i, j;
    float percentage[NUM], marks_sum;

    for(i = 0; i < NUM; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", std[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &std[i].roll_no);
        printf("Enter class of student %d: ", i + 1);
        scanf("%d", &std[i].class);
        printf("Enter student marks\n");
        marks_sum = 0;
        for(j = 0; j < SUB; j++)
        {
            printf("Marks in Subject %d: ", j + 1);
            scanf("%f", &std[i].marks[j]);
            marks_sum = marks_sum + std[i].marks[j];
        }
        percentage[i] = marks_sum / SUB;
    }
    printf("Student Detail: \n");
    for(i = 0; i < NUM; i++)
    {
        printf("\nFor Student %d\n", i + 1);
        printf("Name: %s\n", std[i].name);
        printf("Roll Number: %d\n", std[i].roll_no);
        printf("Class: %d\n", &std[i].class);
		for(j = 0; j < SUB; j++)
		{
			printf("Marks in Subject %d: %.3f\n", j + 1, std[i].marks[j]);
		}
        printf("Percentage: %.3f\n", percentage[i]);
    }
    getchar();
}