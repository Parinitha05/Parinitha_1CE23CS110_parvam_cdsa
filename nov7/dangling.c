#include<stdio.h>
int *add(int a){
    return &a;
}
int main(){
    int a=5;
    int *c=add(a);
    printf("%d",c);
}