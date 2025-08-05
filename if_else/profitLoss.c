#include<stdio.h>
int main(){
    int x;
    printf("Enter the cost price of a item:");
    scanf("%d",&x);
    int y;
    printf("Enter the selling price of a item:");
    scanf("%d",&y);
    if(x>y){
        int z;
        z=x-y;

    printf("Loss of :%d",z);


    }
    else{
        int p;
        p=y-x;

        printf("Profit of:%d",p);
    }
    return 0;
}