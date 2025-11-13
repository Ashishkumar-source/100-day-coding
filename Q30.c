// Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Input the number
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;        // Get the last digit
        reversed = reversed * 10 + digit; // Append it to reversed number
        num /= 10;                   // Remove last digit
    }

    printf("%d\n", reversed);

    return 0;
}
