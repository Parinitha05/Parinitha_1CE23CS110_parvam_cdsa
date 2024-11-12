#include<stdio.h>
int main(){
int n;
printf("enter the size: ");
scanf("%d",&n);
int arr[n];
printf("enter the array: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    int j=i-1;
    int temp=arr[i];
    while(j>=0 && temp<arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}
printf("the sorted array: ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}