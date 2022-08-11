#include <stdio.h>

int main()
{
	int version, major, minor, patch, build;
	char data;
	FILE *fp1, *fp2;
	fp1 = fopen("version.txt", "wb");
	printf("Enter the software version:\t(major.minor.patch.build)\n");
	scanf("%d.%d.%d.%d", &major, &minor, &patch, &build);
	fprintf(fp1, "%d.%d.%d.%d", major, minor, patch, build);
	// Reset Variables
	major = 0;
	minor = 0;
	patch = 0;
	build = 0;
	fclose(fp1);
	fp1 = fopen("version.txt", "rb");
	fp2 = fopen("version.json", "w");
	fscanf(fp1, "%d.%d.%d.%d", &major, &minor, &patch, &build);
	fprintf(fp2, "{\n\t\"major\": %d,\n\t\"minor\": %d,\n\t\"patch\": %d,\n\t\"build\": %d\n}", major, minor, patch, build);
	fclose(fp1);
	fclose(fp2);
}