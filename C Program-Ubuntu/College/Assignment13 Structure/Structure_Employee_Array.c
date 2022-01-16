#include <stdio.h>
#include <conio.h>
#define SIZE 100

struct employee
	{
	char name[20];
	char address[40];
	int age;
	float salary;
	};

void main()
{
struct employee e[SIZE];
int n;
int i;
float temp;
float avg_sal=0;

printf("How many emplyees are there?:\t");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	printf("\nEnter information about employee%d",i+1);
	printf("\nName:\t");
	scanf(" %s", e[i].name);
	printf("\nAddress:\t");
	scanf(" %s",e[i].address);
	printf("\nAge:\t");
	scanf("%d",&e[i].age);
	printf("\nSalary:\t");
	scanf("%f",&temp);
	e[i].salary=temp;
	}
printf("\n\n");
printf("\n Employee name\t Address \t Age\t Salary");
for(i=0;i<n;i++)
	printf("\n%s\t\t %s\t\t %d\t%f\n",e[i].name,e[i].address,e[i].age,e[i].salary);
for(i=0;i<n;i++)
	avg_sal=avg_sal+e[i].salary;
avg_sal=avg_sal/n;
printf("\nAverage Salaray=%f",avg_sal);
getchar();
}
