// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Input the number
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2; // Store remainder (0 or 1)
        num /= 2;
        i++;
    }

    // Print binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
