r#include<stdio.h>
int main(){
    int n;
    printf("Enter year:");
    scanf("%d",&n);
    if(n%4==0){
        printf("This is a leap year");
    }
        else{
            printf("this is not a leap year");
        }
    
    return 0;
}