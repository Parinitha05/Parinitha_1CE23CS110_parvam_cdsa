#include <stdio.h>

int main() {
    int pow = 2;  // Initialization
    int limit = 64;  
    
    while (pow <= limit) {  // Condition
        printf("%d\n", pow);
        pow *= 2;  // Update statement
    }
    
    return 0;
}