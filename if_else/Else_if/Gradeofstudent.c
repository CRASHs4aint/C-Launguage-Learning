#include <stdio.h>
int main()
{
    int x;
    printf("Enter precentage:");
    scanf("%d", &x);
    if (x > 90)
    {
        printf("Execllent");
    }
    else if(90 > x && x > 80)
    {

        printf("Very Good");
    }
    else if(80 > x > 70)
    {
        printf("Good");
    }
    else if(70 > x > 60)
    {
        printf("Can do better");
    }
    else if(60 > x > 40)
    {
        printf(" Average");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}