#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("No");
    } else {
        int i = 2;
        while (i * i <= num) {
            if (num % i == 0) {
                printf("No");
                return 0;
            }
            i++;
        }
        printf("Yes");
    }

    return 0;
}