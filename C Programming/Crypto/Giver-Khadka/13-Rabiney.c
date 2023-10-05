#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  calculates (a * b) % c taking into account that a * b might overflow
int mulmod(int a, int b, int mod)
{
    int x = 0, y = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            x = (x + y) % mod;
        }
        y = (y * 2) % mod;
        b /= 2;
    }
    return x % mod;
}

// modular exponentiation
int modulo(int base, int exponent, int mod)
{
    int x = 1;
    int y = base;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            x = (x * y) % mod;
        y = (y * y) % mod;
        exponent = exponent / 2;
    }
    return x % mod;
}

// 'iteration' means number of steps for accuracy
int miller(int p, int iteration){

    int i;
    int s;
    if (p < 2) return 0;
    if (p != 2 && p % 2 == 0) return 0;
    s = p - 1;
    while (s % 2 == 0)
    {
        s /= 2;
    }
    for (i = 0; i < iteration; i++)
    {
        int a = rand() % (p - 1) + 1, temp = s;
        int mod = modulo(a, temp, p);
        while (temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = mulmod(mod, mod, p);
            temp *= 2;
        }
        if (mod != p - 1 && temp % 2 == 0) return 0;
    }
    return 1;
}

int main(){
    int iteration = 5;
    int num;
    int i =3;
    while(i != 0){
		printf("Enter integer to test primality: ");
		scanf("%d", &num);
		if (miller(num, iteration)) printf("\n%d is inconclusive\n", num);
		else printf("\n%d is composite\n", num);
		i--;
    }
    return 0;
}