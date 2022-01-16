/*This program defines a structure Coordinate having data members x and y for x and y coordinates. 
Take values for two points and find the distance between them. Use a function to calculate the distance but
 the result should be displayed in main function.*/
 #include <stdio.h>
 #include <conio.h>
 #include <math.h>
 #include <stdlib.h>

 struct coordinate
 {
    int x;
    int y;
 };
float find_distance(struct coordinate m, struct coordinate n);
int main()
{
    struct coordinate a, b;
    printf("Enter the x and y coordinate of 1st point: ");
    scanf("%d%d", &a.x, &a.y);
    printf("Enter the x and y coordinate of 2nd point: ");
    scanf("%d%d", &b.x, &b.y);
    printf("The ditance between two points is: %f", find_distance(a, b));
    
}
float find_distance(struct coordinate m, struct coordinate n)
{
    float distance;
    distance = sqrt(pow((n.x - m.x), 2) + pow((n.y - m.y), 2));
    return(distance);
} 