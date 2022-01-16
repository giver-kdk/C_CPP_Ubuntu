/* Admission to a professional course is subject to the following conditions:
a)Marks in mathematics >= 60
b)Marks in physics >= 50
c)Marks in chemistry >= 40
d)Total in all three subjects >= 200
	OR
Total in mathematics and physics >=150
Write a program to process the applications to list eligible candidate.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	int i, j, math, physics, chemistry, totalMarks, mathPhysics, applicants;
	printf("Enter the total number of applicants: ");
	scanf("%d", &applicants);

	char name[applicants][50], elligible[applicants][50];

	for(i = 0, j = 0; i < applicants; i++)
	{
		printf("Name of Candidate %d: ", i + 1);
		scanf("%s", name[i]);
		printf("Marks obtained by %s in Math: ", name[i]);
		scanf("%d", &math);
		printf("Marks obtained by %s in Physics: ", name[i]);
		scanf("%d", &physics);
		printf("Marks obtained by %s in Chemistry: ", name[i]);
		scanf("%d", &chemistry);
		
		if((math >= 60) && (physics >=50) && (chemistry >= 40))
		{
			totalMarks = math + physics + chemistry;
			mathPhysics = math + physics;
			if((totalMarks >= 200) || (mathPhysics >= 150))
			{
				strcpy(elligible[j], name[i]);			// Include name in elligible list if condition met
				j++;
			}
		}
		math = 0;										// Reset values for reuse
		physics = 0;
		chemistry = 0;
	}
	printf("\nList of total apppicants: \n");
	for(i = 0; i < applicants; i++)
	{
		printf("%s\n", name[i]);
	}
	printf("\nList of elligible apppicants: \n");
	for(i = 0; i < j; i++)
	{
		printf("%s\n", elligible[i]);
	}
	getchar();
}