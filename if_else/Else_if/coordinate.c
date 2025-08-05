#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter coordinate :");
    scanf("%d   %d", &x,   &y);
    if (x == 0 && y == 0)
    {
        printf("The point lies on origin");
    }
    else if(x == 0)
    {
        printf("The point lies in Y axis");
    }
    else if(y == 0)
    {
        printf("The point lies in X axis");
    }
    else
    {
        printf("The point lies in X & Y axis");
    }
    return 0;
}
