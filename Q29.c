// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Use unsigned long long for large factorials

    // Input the number
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Print the factorial
        printf("%llu\n", factorial);
    }

    return 0;
}
