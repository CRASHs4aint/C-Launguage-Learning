#include <stdio.h>
// void swap(int arr[j] ,int arr[j-1]){
//     int temp=arr[j];
//     arr[j]=arr[j-1];
//     arr[j-1]=temp;
//     return ;
// }
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=1;i<n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j--;
        }
    }
    printf("\nThe sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}