// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    // Input the number
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if original and reversed numbers are the same
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
