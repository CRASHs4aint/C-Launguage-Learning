#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int lastdigit = 0;
    int sum = 0;
    while (n != 0)
    {
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n / 10;
    }
    printf("Sum of all digits of number is %d", sum);
    return 0;
}