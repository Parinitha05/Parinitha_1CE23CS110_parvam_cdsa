#include<stdio.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;//5 4 12 3
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
         }
    }
    printf("%d",max);
}