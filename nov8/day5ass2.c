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
    int max=0;//5 4 12 3
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
         }
    }
    printf("the largest element: %d\n",max);
    int max1=INT_MIN;
    int max2=INT_MIN;
        for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
         }else if(arr[i]>max2){
            max2=arr[i];
         }
        }
    printf("the second highest element is:%d",max2);
}