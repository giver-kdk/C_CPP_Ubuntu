#include <stdio.h>
void main()
{
    int p1, t1, r1, SI1;
    unsigned int p2, t2, r2, SI2;
    short int p3, t3, r3, SI3;
    unsigned short int p4, t4, r4, SI4;
    long int p5, t5, r5, SI5;
    unsigned long int p6, t6, r6, SI6;


    printf("Enter the integer priciple: ");
    scanf("%d", &p1);
    printf("Enter the integer time: ");
    scanf("%d", &t1);
    printf("Enter the integer rate: ");
    scanf("%d", &r1);
    SI1= p1*t1*r1/100;
    printf("The integer Simple Interest is: %d", SI1);


    printf("\nEnter the unsigned integer priciple: ");
    scanf("%u", &p2);
    printf("Enter the unsigned integer time: ");
    scanf("%u", &t2);
    printf("Enter the unsigned integer rate: ");
    scanf("%u", &r2);
    SI2= p2*t2*r2/100;
    printf("The unsigned Simple Interest is: %u", SI2);


    printf("\nEnter the short integer priciple: ");
    scanf("%hd", &p3);
    printf("Enter the short integer time: ");
    scanf("%hd", &t3);
    printf("Enter the short integer rate: ");
    scanf("%hd", &r3);
    SI3= p3*t3*r3/100;
    printf("The short Simple Interest is: %hd", SI3);


    printf("\nEnter the unsigned short integer priciple: ");
    scanf("%hu", &p4);
    printf("Enter the unsigned short integer time: ");
    scanf("%hu", &t4);
    printf("Enter the unsigned short integer rate: ");
    scanf("%hu", &r4);
    SI4= p4*t4*r4/100;
    printf("The unsigned short Simple Interest is: %hu", SI4);


    printf("\nEnter the long integer priciple: ");
    scanf("%ld", &p5);
    printf("Enter the long integer time: ");
    scanf("%ld", &t5);
    printf("Enter the long integer rate: ");
    scanf("%ld", &r5);
    SI5= p5*t5*r5/100;
    printf("The long Simple Interest is: %ld", SI5);


    printf("\nEnter the unsigned long integer priciple: ");
    scanf("%lu", &p6);
    printf("Enter the unsigned long integer time: ");
    scanf("%lu", &t6);
    printf("Enter the unsigned long integer rate: ");
    scanf("%lu", &r6);
    SI6= p6*t6*r6/100;
    printf("The unsigned long Simple Interest is: %lu", SI6);

}