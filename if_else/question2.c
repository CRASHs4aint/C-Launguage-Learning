#include<stdio.h>
int main(){
    int x;
    printf("enter a number;");
    scanf("%d",&x);
    if(x%5==0){
        printf("Divisble by 5");
    }
    else{
        printf("Not divisble by 5");
        
    }
    return 0;
}