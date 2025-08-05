#include<stdio.h>
int main(){
    int l;
    printf("Enter the length of rectangle:");
    scanf("%d",&l);
    int b;
    printf("enter the breadth of rectangle;");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("Area of rectangle is greater than perimeter");
    }
    if(a<p){
        printf("Area of rectangle is less than perimeter");
    }
    if(a==p){
        printf("Area of rectangle is equal to perimeter ");
    }
    return 0;
}