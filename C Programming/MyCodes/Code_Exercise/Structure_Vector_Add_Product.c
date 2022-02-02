/*This program uses structure variable called vector and functions for sum, dot product, magnitude and printing of vectors.*/
#include <stdio.h>
#include <math.h>
//Global Declaration of structure variable
struct vector
{
    double x;
    double y;
    double z;
};

struct vector add(struct vector a, struct vector b);
double magnitude(struct vector a);
double dot(struct vector a, struct vector b);
void print_vector(struct vector a);

int main()
{
    struct vector v1, v2;
    //Vector Input
    printf("Enter x, y, and z components of 1st vector: ");
    scanf("%lf%lf%lf", &v1.x, &v1.y, &v1.z);
    printf("Enter x, y, and z components of 2nd vector: ");
    scanf("%lf%lf%lf", &v2.x, &v2.y, &v2.z);
    //Vector Output
    printf("\nFirst vector is:\n");
    print_vector(v1);
    printf("\nSecond vector is:\n");
    print_vector(v2);
    //Vector Sum
    printf("\nSum of two vectors is:\n");
    print_vector(add(v1, v2));
    //Vector Magnitude
    printf("\nMagnitude of first vector is: %lf", magnitude(v1));
    printf("\nMagnitude of second vector is: %lf", magnitude(v2));
    //Vector Dot Product
    printf("\nDot product of two vectors is: %lf", dot(v1, v2));
}
struct vector add(struct vector a, struct vector b)
{   //Vector sum is addition of corresponding individual components of two vectors
    struct vector sum;
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;
    sum.z = a.z + b.z;
    return (sum);
}
double magnitude(struct vector a)
{   //Magnitude of vector is square root of square sum of vector components
    double mag;
    mag = sqrt(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2));        
    return (mag);
}
double dot(struct vector a, struct vector b)
{   //Dot product is sum of product of corresponding components of two vectors
    double product;
    product = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
    return(product);
}
void print_vector(struct vector a)
{
    printf("%lf i + %lf j + %lf k", a.x, a.y, a.z);
}