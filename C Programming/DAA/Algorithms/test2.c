int heapsize = 0;
void heap_sort(int a[], int n)
{
	int i;
	build_maxheap(a, n);
	for(i = n - 1; i >= 0; i--)
	{
		int temp = a[i];
		a[i] = a[0];
		a[0] = temp;
		heapsize--;
		max_heapify(a, 0);
	}
}

void build_maxheap(int a[], int n)
{
	int i;
	heapsize = n;
	for(i = n/2 - 1; i >= 0; i--)
	{
		max_heapify(a, i);
	}
}
void max_heapify(int a[], int i)
{
	int largest = i;
	int L = 2*i + 1;
	int R = 2*i + 2;
	if(L < heapsize && a[L] > a[largest])
	{
		largest = L;
	}
	if(R < heapsize && a[R] > a[largest])
	{
		largest = R;
	}
	if(largest != i)
	{
		int temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
		max_heapify(a, largest);
	}
}
