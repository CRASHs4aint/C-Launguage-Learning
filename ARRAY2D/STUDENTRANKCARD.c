#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of student:");
    scanf("%d", &r);
    int c=4;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Roll no   P  C  M \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}