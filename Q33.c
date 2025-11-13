// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, sum = 0;

    // Accept input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of each digit raised to the power of 'digits'
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check if the sum equals the original number
    if (sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
