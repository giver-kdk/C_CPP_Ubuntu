/* Program using structure data to read name, roll, marks in three subjects of 20 students and
print the record in the ascending order of the total marks obtained in three subjects.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SUB 3
#define NUM 20

struct student
{
    char name[20];
	int roll_no;
    float marks[SUB];
}std[NUM], temp;

int main()
{
    int i, j;
    float total[SUB] = {0}, tempMarks;

    for(i = 0; i < NUM; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", std[i].name);
        printf("Enter roll number: ");
        scanf("%d", &std[i].roll_no);
        printf("Enter student marks\n");

        for(j = 0; j < SUB; j++)
        {
            printf("Marks in Subject %d: ", j + 1);
            scanf("%f", &std[i].marks[j]);
            total[i] = total[i] + std[i].marks[j];
        }
    }
	for(i = 0; i < NUM - 1; i++)
	{
		if(total[i] > total[i + 1])
		{	// Sort structure record
			temp = std[i];
			std[i] = std[i + 1];
			std[i + 1] = temp;
			// Sort respective total marks
			tempMarks = total[i];
			total[i] = total[i + 1];
			total[i + 1] = tempMarks;
		}
	}
    printf("Student Rank according to total marks: \n");
    for(i = 0; i < NUM; i++)
    {
        printf("\nFor Student %d\n", i + 1);
        printf("Name: %s\n", std[i].name);
        printf("Roll Number: %d\n", &std[i].roll_no);
		for(j = 0; j < SUB; j++)
		{
			printf("Marks in Subject %d: %.3f\n", j + 1, std[i].marks[j]);
		}
		printf("Total Marks: %.3f\n", total[i]);
    }
    getchar();
}