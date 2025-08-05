#include <stdio.h>
int main()
{
    // 100 97 93 89....upto positive number
    // int a = 100;
    //  for (int i = 1; i <= 34; i++)
    //  {
    //     printf("%d ", a);
    //     a = a - 3;
    // } ab second type se
    int a = 100;
    for (int i = 1; a > 0; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}