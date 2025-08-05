#include<stdio.h>
int main(){
    int arr[5]={4,5,5,3,6};
    int product=1;
    for(int i=0;i<5;i++){
      //sum=sum+arr[i];
      product=product*arr[i];
    }
    printf("%d\n",product);
    return 0;
}