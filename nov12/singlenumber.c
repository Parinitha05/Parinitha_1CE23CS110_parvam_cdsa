#include<stdio.h>
int main(){//O(n)
    int n;
    printf("enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=0;
    for(int i=0;i<n;i++){
         result=result^arr[i];
    }
    printf("the single no is:%d",result);
}