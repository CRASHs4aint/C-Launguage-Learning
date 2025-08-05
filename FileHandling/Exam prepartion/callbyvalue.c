#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("1st number is:%d", a);
    printf("2nd number is:%d",b);
    return ;

}
int main(){
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    swap (a,b);
    return 0;
}