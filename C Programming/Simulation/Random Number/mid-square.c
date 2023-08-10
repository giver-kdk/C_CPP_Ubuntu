#include <stdio.h>
#include <math.h>

int main()
{
	int temp, seed, square, random = 1, prev, count = 0, n, max = 50;
	printf("Enter seed value: ");
	scanf("%d", &seed);
	temp = seed;
	while (temp != 0){
		temp /= 10;
		count++;
	}
	if (count % 2 == 0) n = count / 2;
	else n = (count / 2) + 1;
	
	while (random != 0){
		prev = random;
		random = 1;
		square = seed * seed;
		for (int i = 0; i < n; i++)
			square = square / 10;
		for (int i = 0; i < count; i++)
			random = random * 10;
		random = fabs(square % random);
		if(prev == random || (max--) == 0) break;
		printf("%d\n", random);
		seed = random;
	}
}