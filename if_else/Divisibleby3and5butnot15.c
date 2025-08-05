#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if (x % 3 == 0 ||
        x % 5 == 0)
    {
        if (x % 15 != 0)
        {
            printf("%d is divisble by 3 & 5 but not by 15", x);
        }
    }
    if (x % 3 == 0 ||
        x % 5 == 0)
    {
        if (x % 15 == 0)
        {
            printf("%d is divisble by 3 ,5 & 15", x);
        }
    }
    else
    {
        printf("%d is not divisible by 3 ,5 & 15", x);
    }

    return 0;
}