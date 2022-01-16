/* Given marks in five subjects. Write a program (a) to display “PASS” or “FAIL” if assumed
pass marks is 45 in each subject, (b) to find percentage of marks obtained, and (c) to find
division for “PASS” students assuming that 80% and above for “DISTINCTION”, 60% and
above for “FIRST DIVISION” otherwise “SECOND DIVISION”. */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int s1, s2, s3, s4, s5, per;
    printf("Enter the marks obtained in five subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    if(s1 >= 45 && s2 >= 45 && s3 >= 45 && s4 >= 45 && s5 >= 45)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
		exit(0);
    }

    per = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("\nYour percentage is: %d %%", per);

    if(per >= 80 && per <= 100)
    {
        printf("\nDistinction");
    }
    else if(per >= 60 && per < 80)
    {
        printf("\nFirst Division");
    }
    else if(per < 60)
    {
        printf("\nSecond Division");
    }
	else
	{
		printf("Invalid Percentage");
	}
    getchar();
}