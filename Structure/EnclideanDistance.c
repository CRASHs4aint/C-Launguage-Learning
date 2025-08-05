#include <stdio.h>
#include <math.h>
struct point
{
    float x, y;
};
int main()
{
    struct point P, Q;
    float distance;
    printf("Enter coordinates of point P(x,y):");
    scanf("%f%f", &P.x, &P.y);
    printf("Enter coordinates of point Q(x,y):");
    scanf("%f%f", &Q.x, &Q.y);
    distance = sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
    printf("Euclidean Distance=%.2f\n", distance);
    return 0;
}