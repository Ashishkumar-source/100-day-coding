// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by making them positive
    if (num < 0)
        num = -num;

    // Extract digits and add to sum
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("%d\n", sum);
    return 0;
}
