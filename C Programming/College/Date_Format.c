#include <stdio.h>
int main()
{
    int day, month, year;
    printf("Enter day, month, year in DD-MM-YYYY format: ");
    scanf("%d-%d-%d", &day, &month, &year);                                     //here note the "-"
    printf("\nDay: %d \t Month: %d \tYear: %d", day, month, year);
}