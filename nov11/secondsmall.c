#include<stdio.h>
#include<limits.h>
int main(){
int n;
printf("Enter the size: ");
scanf("%d",&n);
int arr[n];
printf("Enter the array: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
    int min1=INT_MAX;
    int min2=INT_MAX;
        for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
         }else if(arr[i]<min2){
            min2=arr[i];
         }
        }
    printf("the second smallest element is:%d",min2);
}