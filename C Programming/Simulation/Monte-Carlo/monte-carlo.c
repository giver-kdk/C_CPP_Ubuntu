#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size;
    float m = 0, n = 0, x, y, pi;

	srand(time(0));
    rand();

    printf("Enter the number of random samples: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
	// Random floating value between 0 and 1
        x = (double)rand() / RAND_MAX ;
        y = (double)rand() / RAND_MAX ;
        if((x*x + y*y) <= 1)
        {
            m++;
        }
        n++;
    }
    pi = 4 * (m / n);
    printf("The value of PI is: %f", pi);

	return 0;
}
