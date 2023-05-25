// C program to implement Second Chance Algorithm
#include <stdio.h>

struct frame
{
	int page;
	int rb;
};

// Function to Print the Frames vector (only Page numbers are printed)
void printFrames(int fn, struct frame frames[])
{
	for (int i = 0; i < fn; i++)
	{
		printf("%d ", frames[i].page);
	}
	printf("\n");
}

// Function to find the victim page to be replaced and replace it accordingly by your new page
// It return the updated pointer of location from where the new search starts next time
int findAndReplace(int ref_page, int fn, struct frame frames[], int pointer)
{
	while (1)
	{
		if (frames[pointer].rb == 0)
		{
			// Replace i.e put your page at this pointed location in frames
			frames[pointer].page = ref_page;
			pointer = (pointer + 1) % fn;
			return pointer;
		}
		// if reference bit = 1 , then give the second chance and make this bit = 0 again
		//  and proceed to next location to search
		frames[pointer].rb = 0;
		pointer = (pointer + 1) % fn;
	}

	return pointer;
}

// Function to check if there is need for Updating/replacing the page inside Frames array
int isNeedForUpdate(int ref_page, int fn, struct frame frames[])
{
	// search the frames array
	for (int i = 0; i < fn; i++)
	{
		if (frames[i].page == ref_page) // page already exists in frame
		{
			frames[i].rb = 1; // update the reference bit = 1 for giving second chance in future
			return 0;					// No need for Page replacement
		}
	}
	return 1; // There is need for Adding new page/page replacement as page is not present already
}

// Function to return the total Page faults
int secondChance(int ref_str[], int n, int fn, struct frame frames[])
{
	int pg_fault = 0, pointer = 0;
	for (int i = 0; i < n; i++)
	{
		// check if there is need for Updating(Add referenced page) or replacing(Page Replacement) the page inside Frames array
		if (isNeedForUpdate(ref_str[i], fn, frames))
		{
			// if yes, then find the page in frames array which need to be replaced and replace accordingly
			pointer = findAndReplace(ref_str[i], fn, frames, pointer);
			// increase page fault count
			pg_fault++;
		}

		// Print the content present inside frames
		printFrames(fn, frames);
	}
	// return total page faults to main()
	return pg_fault;
}

int main()
{
	int i, n, fn, pg_fault = 0;
	printf("\nEnter the no. of pages:\n");
	scanf("%d", &n);
	// create reference string array
	int ref_str[n];
	printf("\nEnter the reference string(actual page numbers) :\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &ref_str[i]);
	printf("\nEnter the no. of frames you want to give to the process :");
	scanf("%d", &fn);

	struct frame frames[fn];

	// initialise the frames as page no = -1 , reference bit =0
	for (int i = 0; i < fn; i++)
	{
		frames[i].page = -1;
		frames[i].rb = 0;				// "rb" = Reference Bit
	}

	pg_fault = secondChance(ref_str, n, fn, frames);

	printf("\nTotal No. of Page faults =%d\n", pg_fault);
	return 0;
}