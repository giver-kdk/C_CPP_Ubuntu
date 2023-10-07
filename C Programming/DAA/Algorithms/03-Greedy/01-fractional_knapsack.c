#include <stdio.h>
float capacity = 7;

struct item
{
	float p;
	float w;
	float pw;
};

void sort(struct item a[], int n)
{
	// Bubble Sort in Descending Order
	for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < (n - 1) - i; j++)
        {
			// Compare and Swap according to ratio
			if(a[j].pw < a[j + 1].pw)        
			{
				struct item temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
    }
}
int main()
{
	int i, n;
	float p = 0;
	printf("Enter number of items: ");
	scanf("%d", &n);
	struct item obj[n];								// Array of items
	printf("Enter profits of all items: ");
	for(i = 0; i < n; i++)
	{	
		scanf("%f", &obj[i].p);
	}
	printf("Enter weights of all items: ");
	for(i = 0; i < n; i++)
	{	
		scanf("%f", &obj[i].w);
		obj[i].pw = obj[i].p / obj[i].w;			// Pi/Wi Ratio
	}
	sort(obj, n);
	for(i = 0; i < n; i++)
	{	
		if(capacity > 0 && obj[i].w <= capacity)
		{
			capacity -= obj[i].w;
			p = p + obj[i].p;
		}
		else break;
	}
	if(capacity > 0) p = p + obj[i].p * (capacity / obj[i].w);
	printf("Profit is %.2f", p);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}