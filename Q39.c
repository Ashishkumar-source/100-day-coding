// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0; // Flag to check if there is any odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by making them positive
    if (num < 0)
        num = -num;

    // Extract digits and multiply odd ones
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    // If no odd digit found, product remains 1
    if (!hasOdd)
        product = 1;

    printf("%d\n", product);
    return 0;
}
