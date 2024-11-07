#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact=1;
    while(n!=0){
        fact=fact*n;
        n--;
    }
    printf("the factorial is %d ",fact);
    return 0;
    
}