#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    int b=1;
    for (int i = 1; i <= n; i++)
    {
        int nsp=n-i;
        int a=i-1;
        for (int k = 1; k<=nsp; k++)
        {
           printf(" ");
    }
    for(int j=1;j<=i;j++){
        int d=b+64;
        char ch=d;
        printf("%c",ch);
         }
         for(int q=1;q<=i-1;q++){
            int f=a+64;
            char cha=f;
            printf("%ch",cha);
           
         }
         printf("\n");
    }

    return 0;
}