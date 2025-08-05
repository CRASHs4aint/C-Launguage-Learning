#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int number;
    printf("Enter a string:");
    scanf("%s", str);
    number = atoi(str);
    printf("Converted integer:%d\n", number);
    return 0;
}