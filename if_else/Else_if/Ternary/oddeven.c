#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    // if (n%2==0){
     //   printf("Even number");

  //  }
//   else{
 //      printf("Odd number");
 //   }
 x%2==0 ? printf("Even number") :printf("Odd number");
    return 0;
    
}