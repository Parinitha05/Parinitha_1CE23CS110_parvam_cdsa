#include<stdio.h>
int main(){
    float num;
    int intPart;
    scanf("%f",&num);
    intPart=(int)num;
    printf("%.2f\n",num);
    printf("%d\n",intPart);

    return 0;
}