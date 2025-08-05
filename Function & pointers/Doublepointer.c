#include<stdio.h>
int main(){
    int a=2;
    int *x=&a;
    int **y=&x;//int **-->int * ka adress store karta hai
  // printf("%p\n",&x);      %p se adress print hota hai
 // printf("%p",y);
 printf("%d\n",*x);
 printf("%d\n",**y);
 printf("%d\n",a);
 
   return 0;
}