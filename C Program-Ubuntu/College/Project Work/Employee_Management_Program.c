/*This program is a employee management software. The feature are:
* Add employee data
* List every employee data
* Search specific employee data
* Modify specific employee data
* Delete specific employee and data									*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>
#include <windows.h>
#include <direct.h>
#include <process.h>

typedef struct Employee
{
	char empId[15];
	char fname[20];														// First Name
	char lname[20];														// Last Name
	int age;
	float bsal;															// Basic Salary
	long phone;
}Employee;

FILE *fp;
Employee emp;
char fileName[] = "EMP.txt";
char tempFileName[] = "temp.txt";
/*Functions used in project*/
void AddEmployee();
void ListEmployee();
void SearchEmployee();
void ModifyEmployee();
void DeleteEmployee();
void first();
char file();
void gotoxy(short int x, short int y);

int main()
{
	char ch = 'a';
	system("cls");														// Clear Screen
	first();
	fp = fopen(fileName, "rb+");
	if(fp == NULL)
	{
		fp = fopen(fileName, "wb+");									// Open file only if it doesn't exist
		if(fp == NULL)
		{
			printf("Can't Open File");									// If can't create new file, then error
			exit(0);
		}
	}
	while(ch != '6')
	{
		ch = file();													// Get user choice input
		switch(ch)
		{
			case '1':
				AddEmployee();
				fclose(fp);
				break;
			case '2':
				ListEmployee();
				fclose(fp);
				break;
			case '3':
				SearchEmployee();
				fclose(fp);
				break;
			case '4':
				ModifyEmployee();
				fclose(fp);
				break;
			case '5':
				DeleteEmployee();
				fclose(fp);
				break;
			case '6':
				exit(0);
				break;
			default:
				system("Color 04");											// 4 = RED
				gotoxy(30, 10);
				printf("\n\t\t\tWRONG CHOICE");
				getchar();
				break;
		}
	}
	return 0;
}
void AddEmployee()
{
	char another, ch;
	do
	{
		system("cls");
		fseek(fp, 0, SEEK_END);												// Set cursor to end of file to append data
		another = 'Y';
		gotoxy(25, 3);														// Put cursor to specified position of graph
		system("Color 04");			
		printf("ADD EMPLOYEE RECORD");
		gotoxy(25,6);
		system("Color 02");													// 2 = GREEN
		// User Input
		fflush(stdin);
		printf("1.ENTER EMPLOYEE ID: ");
		gets(emp.empId);
		gotoxy(25, 7);
		fflush(stdin);
		printf("2.ENTER FIRST NAME OF EMPLOYEE: ");
		gets(emp.fname);
		gotoxy(25, 8);
		fflush(stdin);
		printf("3.ENTER LAST NAME OF EMPLOYEE: ");
		gets(emp.lname);
		gotoxy(25, 9);
		fflush(stdin);
		printf("4.ENTER AGE OF EMPLOYEE: ");
		scanf("%d", &emp.age);
		gotoxy(25, 10);
		fflush(stdin);
		printf("5.ENTER SALARY OF EMPLOYEE: ");
		scanf("%f", &emp.bsal);
		gotoxy(25, 11);
		fflush(stdin);
		printf("5.ENTER PHONE OF EMPLOYEE: ");
		scanf("%ld", &emp.phone);
		gotoxy(25, 15);
		system("Color 05");													// 5 = MAGENTA
		printf("SAVE CHANGES (y/n)?");
		ch = getche();
		if(ch == 'y' || ch == 'Y')
		{
			fwrite(&emp, sizeof(emp), 1, fp);								// Store employee structure(block) in file
			fflush(stdin);
		}
		gotoxy(28, 15);
		system("cls");
		printf("ADD ANOTHER EMPLOYEE (y/n)?");
		fflush(stdin);
		another = getche();													// Loop continues if another is 'y' or 'Y'
		system("Color 015");												// 15 = WHITE
	}while(another == 'Y' || another == 'y');
}
void ListEmployee()
{	// Print file data systematically
	int i;
	system("cls");
	fseek(fp, 0, SEEK_SET);													// Set cursor to intitial position
	system("Color 04");
	gotoxy(1, 1);
	printf("LIST OF EMPLOYEE RECORD");
	system("Color 02");
	gotoxy(1, 2);
	printf("EMP ID");
	gotoxy(14, 2);
	printf("FIRST NAME");
	gotoxy(27, 2);
	printf("LAST NAME");
	gotoxy(40, 2);
	printf("AGE");
	gotoxy(53, 2);
	printf("SALARY");
	gotoxy(66, 2);
	printf("PHONE");
	// Print horizontal dotted line
	for(i = 1; i <= 80; i++)
	{
		system("Color 014");												// 14 = YELLOW
		gotoxy(i, 3);														// Increment horizontal value
		printf("-");
	}
	i = 4;
	while(fread(&emp, sizeof(emp), 1, fp) != 0)								// Read one structure block at a time
	{
		gotoxy(1, i);
		printf("%s", emp.empId);
		gotoxy(14, i);
		printf("%s", emp.fname);
		gotoxy(27, i);
		printf("%s", emp.lname);
		gotoxy(40, i);
		printf("%d", emp.age);
		gotoxy(53, i);
		printf("%.2f", emp.bsal);
		gotoxy(66, i);
		printf("%ld", emp.phone);
		i++;																// Increment for new line 
	}
	fflush(stdin);
	getche();
}
void SearchEmployee()
{
	int i, datafound = 0;
	char employeeId[15];
	char another, ch;
	do
	{

		system("cls");
		fseek(fp, 0, SEEK_SET);												// Set cursor to initial position
		gotoxy(1, 1);
		system("Color 04");
		printf("SEARCH EMPLOYEE RECORD: ");
		gotoxy(5, 2);
		system("Color 02");
		fflush(stdin);
		printf("ENTER EMPLOYEE ID: ");
		gets(employeeId);
		while(fread(&emp, sizeof(emp), 1, fp) != 0)							// Read single structure block at a time
		{
			if(strcmp(emp.empId, employeeId) == 0)							// Compare input employee ID with file data 
			{
				datafound = 1;												// Data Detection Indicator
				break;
			}

		}
		if(datafound == 1)													
		{	// Print the data if found in file
			system("Color 04");
			gotoxy(4, 4);
			printf("RECORD OF EMPLOYEE");
			system("Color 02");
			gotoxy(4, 5);
			printf("--------------------------");
			gotoxy(4, 6);
			printf("EMPLOYEE ID: ");
			printf("%s", emp.empId);										// 'emp.empID' has data previously stored
			gotoxy(4, 7);
			printf("FIRST NAME: ");
			printf("%s", emp.fname);
			gotoxy(4, 8);
			printf("LAST NAME: ");
			printf("%s", emp.lname);
			gotoxy(4, 9);
			printf("AGE: ");
			printf("%d", emp.age);
			gotoxy(4, 10);
			printf("BASIC SALARY: ");
			printf("%.2f", emp.bsal);
			gotoxy(4, 11);
			printf("PHONE: ");
			printf("%ld", emp.phone);
		}
		else
		{
			gotoxy(10, 8);
			printf("EMPLOYEE NOT FOUND!!!");
		}
		gotoxy(25, 15);
		system("Color 04");
		printf("SEARCH ANOTHER EMPLOYEE (y/n)?");
		fflush(stdin);
		another = getche();													// Loop continues until 'another' is 'y' or 'Y'
		fflush(stdin);
		system("Color 015");												// 15 = WHITE
	}while(another == 'Y' || another == 'y');
}
void ModifyEmployee()
{
	int i, datafound = 0, recordNo = 0;
	char employeeId[15];
	char another, ch;
	do
	{
		system("cls");
		fseek(fp, 0, SEEK_SET);												// Set cursor to initial position
		gotoxy(1, 1);
		system("Color 04");
		printf("MODIFY EMPLOYEE RECORD: ");
		system("Color 02");
		gotoxy(2, 2);
		fflush(stdin);
		printf("ENTER EMPLOYEE ID TO BE MODIFIED: ");
		gets(employeeId);
		while(fread(&emp, sizeof(emp), 1, fp) == 1)							// Read one employee ID at a time
		{
			if(strcmp(emp.empId, employeeId) == 0)							// Compare employee ID
			{
				datafound = 1;
				break;
			}
			recordNo++;														// Count number of structure read to us later on
		}
		if(datafound == 1)
		{
			gotoxy(5, 3);
			system("Color 04");
			printf("OLD RECORD IS: ");
			gotoxy(5, 4);
			system("Color 02");
			printf("EMPLOYEE ID: ");
			printf("%s", emp.empId);										// Print previously found data
			gotoxy(5, 5);
			printf("FIRST NAME: ");
			printf("%s", emp.fname);
			gotoxy(5, 6);
			printf("LAST NAME: ");
			printf("%s", emp.lname);
			gotoxy(5, 7);
			printf("AGE: ");
			printf("%d", emp.age);
			gotoxy(5, 8);
			printf("BASIC SALARY: ");
			printf("%.2f", emp.bsal);
			gotoxy(5, 9);
			printf("PHONE: ");
			printf("%ld", emp.phone);
			gotoxy(5, 11);
			system("Color 04");
			printf("ENTER NEW INFORMATION: ");
			gotoxy(5, 12);
			system("Color 02");
			printf("EMPLOYEE ID: ");
			gets(emp.empId);												// Store new data
			gotoxy(5, 13);
			printf("FIRST NAME: ");
			gets(emp.fname);
			gotoxy(5, 14);
			printf("LAST NAME: ");
			gets(emp.lname);
			gotoxy(5, 15);
			printf("AGE: ");
			scanf("%d", &emp.age);
			gotoxy(5, 16);
			printf("BASIC SALARY: ");
			scanf("%f", &emp.bsal);
			gotoxy(5, 17);
			printf("PHONE: ");
			scanf("%ld", &emp.phone);
			// 'sizeof(emp) * (recordNo)' is the offset value in fseek()
			fseek(fp, sizeof(emp) * (recordNo), SEEK_SET);					// Sets cursor to specified offset from initial position
			gotoxy(5, 19);

			if(fwrite(&emp, sizeof(emp), 1, fp) == 1)						// Overwrite new data on specified position
			{
				printf("THE RECORD HAS BEEN MODIFIED!!!");
			}
			else
			{
				printf("ERROR DURING MODIFICATION!!!");
			}
		}
		else
		{
			gotoxy(10, 19);
			printf("EMPLOYEE NOT FOUND");
		}
		gotoxy(10, 21);
		system("Color 04");
		printf("MODIFY ANOTHER EMPLOYEE (y/n)?");
		fflush(stdin);
		another = getchar();													// Loop continues if another is 'y' or 'Y'
		system("Color 015");												// 15 = WHITE
	}while(another == 'Y' || another == 'y');
}
void DeleteEmployee()
{
	int i, datafound = 0;
	char employeeId[15];
	FILE *fpTemp;
	char another, ch;
	do
	{
		system("cls");
		fseek(fp, 0, SEEK_SET);												// Set cursor to initial position
		system("Color 04");
		gotoxy(1, 1);
		printf("DELETE EMPLOYEE RECORD");
		system("Color 02");
		gotoxy(2, 2);
		fflush(stdin);
		printf("ENTER EMPLOYEE ID TO BE DELETED: ");
		gets(employeeId);
		while(fread(&emp.empId, sizeof(emp), 1, fp) == 1)					// Read single structure block at a time
		{	
			if(strcmp(emp.empId, employeeId) == 0)							// Compare input employee ID with every file data
			{
				datafound = 1;
				break;
			}
		}
		if(datafound == 1)
		{
			fpTemp = fopen(tempFileName, "wb");								// Create temporary file with 'fpTemp' pointer 
			rewind(fp);														// Set cursor to intial position of 'fp' file pointer
			while(fread(&emp, sizeof(emp), 1, fp) == 1)						// Read single data at a time from file pointed by 'fp'
			{
				if(strcmp(emp.empId, employeeId) != 0)						// Write data to new file only if ID doesn't match
				{
					fwrite(&emp, sizeof(emp), 1, fpTemp);					// Write data on file pointed by 'fpTemp'
				}
			}
			fclose(fp);
			fclose(fpTemp);
			remove(fileName);												// Deletes specified file
			rename(tempFileName, fileName);									// Renames 'tempFileName' as 'fileName'
			fp = fopen(fileName, "rb+");									// Reopen file in 'rb+' mode to read again
			gotoxy(6, 8);
			printf("SUCCESSFULLY DELETED!!!");
		}
		else
		{
			gotoxy(2, 6);
			printf("EMPLOYEE NOT FOUND!!!");
		}
		gotoxy(10, 20);
		system("Color 04");
		printf("DELETE ANOTHER EMPLOYEE(y/n)?");
		fflush(stdin);
		another = getche();													// Loop continues according 'another'
		system("Color 015");
	}while(another == 'Y' || another == 'y');
}
void first()
{	// Basic Intro Panel
	int gd = DETECT, gm;
	char data[] = "C:\\MINGw\\lib\\libbgi.a";
	char empInfo[] = "EMPLOYEE INFORMATION SYSTEM";
	char developed[]  = "DEVELOPED BY: ";
	char giver[] = "GIVER KHADKA";
	char bar[] = ">>>>>>>>>>>>>";

	initgraph(&gd, &gm, data);
	setcolor(2);
	settextstyle(4, 0, 1);													// GOTHIC_FONT
	outtextxy(80, 190, empInfo);
	settextstyle(1, 0, 1);
	setcolor(4);
	outtextxy(480, 370, developed);
	setcolor(1);															// 1 = BLUE
	outtextxy(400, 370, giver);
	outtextxy(400, 400, bar);
	getchar();
	restorecrtmode();
	closegraph(0);
}
char file()
{
	int gd = DETECT, gm;
	char data[] = "C:\\MINGw\\lib\\libbgi.a";
	char i;
	char empInfo[] = "EMPLOYEE INFORMATION SYSTEM";
	char menu[]  = "MAIN MENU";
	char op1[] = "1>>ADD EMPLOYEE RECORD.";
	char op2[] = "2>>LIST RECORD OF ALL EMPLOYEE.";
	char op3[] = "3>>SEARCH A PARTICULAR EMPLOYEE.";
	char op4[] = "4>>MODIFY INFORMATION OF A EMPLOYEE.";
	char op5[] = "5>>DELETE A EMPLOYEE.";
	char op6[] = "6>>EXIT SYSTEM.";
	char choice[] = "ENTER YOUR CHOICE";
	// Display options and return selected choice
	initgraph(&gd, &gm, data);
	setcolor(4);
	setcolor(2);
	settextstyle(7, 0, 2);
	outtextxy(130, 45, empInfo);
	settextstyle(7, 0, 3);
	setcolor(14);															// 14 = YELLOW
	outtextxy(260, 95, menu);
	settextstyle(0, 0, 0);
	setcolor(5);															// 5 = MAGENTA
	outtextxy(200, 145, op1);
	outtextxy(200, 170, op2);
	outtextxy(200, 195, op3);
	outtextxy(200, 220, op4);
	outtextxy(200, 245, op5);
	outtextxy(200, 270, op6);
	setcolor(2);
	outtextxy(200, 360, choice);
	fflush(stdin);															// Clear buffer memory
	i = getche();
	restorecrtmode();														// Switch back to text mode
	closegraph(0);
	return(i);
}
void gotoxy(short int x, short int y)
{
	static HANDLE h = NULL;  												// Handle variable pointing to NULL
	h = GetStdHandle(STD_OUTPUT_HANDLE);									// Require standard output handle to control cursor
	COORD c = {x, y};  														// COORD variable stores the coordinates
	SetConsoleCursorPosition(h, c);											// Set cursor position to specified coordinate 'c'
}