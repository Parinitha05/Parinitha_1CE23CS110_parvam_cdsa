#include <stdio.h>

int main() {
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("enter the elemnt to find:");
    scanf("%d",&x);
    int digit= 0;  
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            digit=arr[i];  
            break;      
        }
    }
    if (digit) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
