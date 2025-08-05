#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       for(int k=1;k<=n-i;k++)
       {
        printf(" ");
       }
       int a=1;
       for(int j=1;j<=i-1;j++){
        int d=a+64;
        a++;
        char ch=d;
        printf("%c",ch);
       }
       printf("\n");
    }
    return 0;
}