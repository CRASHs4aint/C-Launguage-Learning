#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number a:");
    scanf("%d", &a);
    int b;
    printf("Enter a number b:");
    scanf("%d", &b);
    int c;
    printf("ENter a number c:");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is the greatest among entered numbers");
    }
    if (b > a && b > c)
    {
        printf("b is the greatest among entered numbers");
    }
    if (c > b && c > a)
    {
        printf("c is  the  greatest among entered numbers");
    }
    return 0;
}