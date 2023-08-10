#include <stdio.h>
#include <math.h>

int main()
{
	int seed, square, random = 1, prev, count, n;
	printf("Enter seed value: ");
	scanf("%d", &seed);
	while (random != 0 || prev != random){
		prev = random;
		random = 1;
		count = 0;
		square = seed * seed;
		while (seed != 0){
			seed /= 10;
			count++;
		}
		if (count % 2 == 0) n = count / 2;
		else n = (count / 2) + 1;

		for (int i = 0; i < n; i++)
			square = square / 10;
		for (int i = 0; i < count; i++)
			random = random * 10;
		random = square % random;
		if(prev == random) break;
		printf("%d\n", random);
		seed = random;
	}
}