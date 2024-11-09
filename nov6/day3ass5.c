#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int sum = 0;
    while (num != 0) {
        sum += num % 10;  // Add last digit
        num /= 10;        // Remove last digit
    }

    printf("%d", sum);

    return 0;
}