// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Read input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Numbers less than 2 are not prime
    if (num < 2) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
