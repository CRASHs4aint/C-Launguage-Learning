#include<stdio.h>
int main(){
    float x;
    printf("Enter your real number:");
    scanf("%f",&x);
    int y;
    y=x;
    float z =x-y;
    printf("Your fractional part is:");
    scanf("%f",z);
    return 0;
}