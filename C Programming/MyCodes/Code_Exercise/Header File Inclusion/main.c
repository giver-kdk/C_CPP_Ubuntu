// <> means search header file directly in 'include' path
#include <stdio.h>
// "" means search header file in current location first and then search in 'include' path
#include "my_header.h"								
// Mutiple inclusion of same header file
// #include "my_header.h"							// This is not defined again since already defined						

int main()
{
	int a, b;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);

	printf("Sum of two numbers is: %d\n", add(a, b));		// 'add' function called from 'my_header.h'
	printf("Difference of two numbers is: %d\n", subtract(a, b));

}