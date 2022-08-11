#include <stdio.h>
#define Bool int										// Bool is replaced by 'int' during compilation
#define TRUE 1
#define FALSE 0
#define N 10
#define REPEAT(n) for(int i = 0; i < n; i++)			// REPEAT(n) is with parameters like in function
#define PRINT_NEW_LINE printf("\n")
#define IS_EVEN(n) ((n) % 2) == 0						// IS_EVEN(n) is replaced by Boolean value

int main()
{
	int array[N];
	printf("Enter %d numbers: ", N);

	Bool all_even_squares = TRUE;						// Initially even value assignment

	REPEAT(N)											
	{
		scanf("%d", &array[i]);

		if( !IS_EVEN(array[i] * array[i]))				// Checks if square of the array number is even or odd
		{
			all_even_squares = FALSE;
		}
	}
	if(all_even_squares)
	{
		printf("All numbers have even squares.");
		PRINT_NEW_LINE;
	}
	else
	{
		printf("Not all numbers have even squares.");
		PRINT_NEW_LINE;
	}
	return 0;
}