#include<stdio.h>
int main(){
    int r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter number of column:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //baki hai code
    
    return 0;
}