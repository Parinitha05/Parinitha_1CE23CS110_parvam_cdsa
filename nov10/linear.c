#include<stdio.h>
int isPresent(int n,int arr[],int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the target number: ");
    scanf("%d",&target);
    printf("%d",isPresent(n,arr,target));
}