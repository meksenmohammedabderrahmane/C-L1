#include <stdio.h>

int main() {
    float number, absolute;
    
    
    printf("Enter a number: ");
    scanf("%f", &number);
    
    
    if (number < 0) {
        absolute = -number;  // Negate negative number
    } else {
        absolute = number;   // Keep positive number as is
    }
    
   
    printf("Absolute value = %.2f\n", absolute);
    
    return 0;
}