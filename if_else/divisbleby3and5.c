#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if (x % 3 == 0 && x % 5 == 0)
    {
        printf("This number is divisble by 3 & 5");
    }
    else
    {
        printf("This number is not divisble by 3 & 5");
    }

    return 0;
}