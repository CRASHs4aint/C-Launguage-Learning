#include<stdio.h>
#include<limits.h>
int main(){
      int arr[4];
      printf("Enter element of an array(size[4]):");
      scanf("%d ",&arr);
      int max=INT_MIN;
      for(int i=1;i<=3;i++){
        if(max<arr[i]){
            max=arr[i];
        }
      }
      printf("The maximum value of given array is %d",max);
    return 0;
}