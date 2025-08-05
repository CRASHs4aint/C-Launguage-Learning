#include <stdio.h>
union check
{
    int i;
    int c;
};
int main()
{
    union check x;
    x.i = 1;
    if (x.c == 1)
    {
        printf("Little Endian \n");
    }
    else
        printf("Big Endian");
    return 0;
}
