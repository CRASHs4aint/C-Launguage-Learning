#include<stdio.h>
int main()
{
    float principle,rate,time,si;
    printf("Enter Princple:");
    scanf("%f",&principle);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("Enter time:");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf("Your simple interst is:%f",si);
    return 0;
}