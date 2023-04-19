// Program to design NFA that accepts set of all strings ending with 01
#include <stdio.h>
int state[50], newState[50], result[50];
// int * newState, * result;

int s; // No. of resultant states
enum STATES {q0,q1,q2,dead};
char inputs[2] = {'0', '1'};
int initial = q0;
int final[] = {q2}; // Set of final states
int n = 1;			// No. of final states
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
	if (input == inputs[0])
	{
		newState[len1++] = dead;
	}
	else if (input == inputs[1])
	{
		newState[len1++] = q2;
	}
	return newState;
}
int *tq2(char input)
{
	len2 = 0;
	if (input == inputs[0] || input == inputs[1])
	{
		newState[len2++] = dead;
	}
	return newState;
}

void concat_array(int array1[50], int *array2, int len1, int len2)
{
	int i, j = len1, k;
	for (i = 0; i < len2; i++)
	{
		// Union Logic
		for (k = 0; k < len1; k++)
		{
			if (array1[k] == array2[i]) break;
		}
		if (k == len1)
		{
			array1[j++] = array2[i];
		}
	}
	s = j; // Updated Number of states
	acc = j;
}
void printing(int array[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d", array[i]);
	}
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
		gets(string); // Reads Character even after whitespace

		state[s++] = initial; // Initialize state
		// printf("%d", state[0]);
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
				printf("%d\n", len);
				printf("%d\n", acc);
				concat_array(totalStates, currentState, acc, len);
				printing(currentState, 4);
				printf("\n");
				printing(totalStates, 4);
				printf("\n");
			}
			// printing(totalStates, s);
			for (l = 0; l < s; l++)
			{
				state[l] = totalStates[l];
			}
			// printf("\n");
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
		// if (len0 == 0 && len1 == 0 && len2 == 0) printf("\nInvalid String");
		printf("\nContinue? (Y/N): ");
		scanf(" %c", &choice);
	}
	printf("\n***** Name: Giver Khadka *****");
	return 0;
}
