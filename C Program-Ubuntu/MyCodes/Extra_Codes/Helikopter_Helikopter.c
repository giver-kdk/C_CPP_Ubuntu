#include <stdio.h>
#include <windows.h>

int main()
{
	int i;
	struct _COORD COORD = {0, 0};
	system("cls");
	for(i = 0; i < 5000; i++)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), COORD); 
		if(i % 2 == 0)
		{
			printf("\n               O===------------\n");
			printf("             __I__                     \n           /     \\                     \n        ~~~         ~~~              /O /\n      /  ____           \\___________/ |/\n     /  |    |           ___________~~|\n    |   ------          /\n     \\_________________/\n	   ||    ||\n	  ~~~~  ~~~~");
		}
		else
		{
			printf("\n------------===O               \n");
			printf("             __I__                    |\n            /     \\                   |\n        ~~~         ~~~              /O /\n      /  ____           \\___________/  /\n     /  |    |           ___________~~ \n    |   ------          /\n     \\_________________/\n	   ||    ||\n	  ~~~~  ~~~~");
		}
		printf("\n\n\tHELIKOPTER HELIKOPTER...");
		Sleep(100);
	}
}