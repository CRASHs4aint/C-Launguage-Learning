#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);
    printf("Enter 3rd number:");
    scanf("%d", &c);
    printf("Enter 4th number:");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the greatest", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("%d is the greatest", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("%d is the greatest", d);
    }
     return 0;
}