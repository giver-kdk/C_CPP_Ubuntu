// Program to design NFA that accepts set of all strings ending with 01
#include <stdio.h>
int state[50], newState[50];
int s; 
enum STATES {q0,q1,q2};
char inputs[2] = {'0', '1'};
int initial = q0;
int final[] = {q2}; 
int n = 1;			
int len0 = 0, len1 = 0, len2 = 0, acc = 0;

int *tq0(char input)
{
	len0 = 0;
	if (input == inputs[0])
	{
		newState[len0++] = q0;
		newState[len0++] = q1;
	}
	else if (input == inputs[1])
	{
		newState[len0++] = q0;
	}
	return newState;
}
int *tq1(char input)
{
	len1 = 0;
	if (input == inputs[1])
	{
		newState[len1++] = q2;
	}
	return newState;
}
int *tq2(char input)
{
	len2 = 0;
	return newState;
}

void concat_array(int array1[50], int *array2, int len1, int len2)
{
	int i, j, k = len1;
	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (array1[j] == array2[i]) break;
		}
		if (j == len1) array1[k++] = array2[i];
	}
	s = k; 					
	acc = k;
}

int main()
{
	int i, j, k, l;
	char string[20];
	char choice;

	while (choice != 'n' && choice != 'N')
	{
		int isAccepted = 0;
		s = 0;
		// fflush(stdin);
		__fpurge(stdin); // Alternative of fflush(stdin);
		printf("Enter a string: ");
		gets(string); 
		// Initialize state
		state[s++] = initial; 
		for (i = 0; string[i] != '\0'; i++)
		{
			int totalStates[50], len;
			int *currentState;
			acc = 0;
			k = s;
			for (j = 0; j < k; j++)
			{
				if (state[j] == q0)
				{
					currentState = tq0(string[i]);
					len = len0;
				}
				else if (state[j] == q1)
				{
					currentState = tq1(string[i]);
					len = len1;
				}
				else if (state[j] == q2)
				{
					currentState = tq2(string[i]);
					len = len2;
				}
				concat_array(totalStates, currentState, acc, len);
			}
			for (l = 0; l < s; l++)
			{
				state[l] = totalStates[l];
			}
		}
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (state[i] == final[j])
				{
					printf("\nString Accepted");
					isAccepted = 1;
					break;
				}
			}
		}
		if (isAccepted == 0) printf("\nString Rejected");
		printf("\nContinue? (Y/N): ");
		scanf(" %c", &choice);
	}
	printf("\n***** Name: Giver Khadka *****");
	return 0;
}
