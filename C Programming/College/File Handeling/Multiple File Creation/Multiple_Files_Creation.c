#include <stdio.h>

struct emp
{
	char name[20];
	int age;
	float salary;
}s1;
struct student
{
	char name[20];
	int roll;
	char section;
}s2;
int main()
{
	FILE *fb = fopen("x.txt", "wb");
	printf("Enter name: ");
	scanf("%s", s1.name);
	printf("Enter age: ");
	scanf("%d", &s1.age);
	printf("Enter salary: ");
	scanf("%f", &s1.salary);
	fprintf(fb, "Name: %s", s1.name);
	fprintf(fb, "Age: %d", s1.age);
	fprintf(fb, "Salary: %f", s1.salary);

	fclose(fb);
	FILE *ft = fopen("y.txt", "w");
	printf("Enter name: ");
	scanf("%s", s2.name);
	printf("Enter roll: ");
	scanf("%d", &s2.roll);
	printf("Enter section: ");
	scanf(" %c", &s2.section);
	fprintf(ft, "Name: %s", s2.name);
	fprintf(ft, "Age: %d", s2.roll);
	fprintf(ft, "Salary: %f", s2.section);
	fclose(ft);
}