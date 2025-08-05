#include <stdio.h>
int main()
{
    int n;
    printf("Enter n number:");
    scanf("%d", &n);
    int r;
    printf("Enter r number:");
    scanf("%d", &r);
    int nfact = 1;  // n!
    int rfact = 1;  // r!
    int nrfact = 1; //(n-r)!
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }
    for (int i = 1; i <= n - r; i++)
    {
        nrfact = nrfact * i;
    }
    int ncr = nfact / (rfact * (nrfact));
    printf("The NcR is :%d", ncr);
    return 0;
}