#include<stdio.h>
int main(){//O(n^2)quadratic time complexity
int n;
printf("enter the size: ");
scanf("%d",&n);
int arr[n];
printf("enter the array: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j+1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("the sorted array is: ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}