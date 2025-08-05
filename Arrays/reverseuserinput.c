#include<stdio.h>
int main (){
    int arr[3];
    for(int i=0;i<=2;i++){
      printf("Enter element number %d:",i+1);
      scanf("%d",&arr[i]);
    }
    printf("Revesed Array :");
   for(int i=0;i<=2;i++){
    printf("%d ",arr[2-i]);
  }
    return 0;
}