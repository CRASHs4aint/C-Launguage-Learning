#include<stdio.h>
int main ()
{
    int marks[10];
    for(int i=0;i<10;i++){
        printf("\nEnter Roll.no %d marks:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++){
        if (marks[i]<35){
            printf("\nRoll no of students whose number is less than 35: %d ",i);
            }
    }
    return 0;
}