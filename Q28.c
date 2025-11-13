//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    int product = 1;

    // Input the value of n
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d\n", product);

    return 0;
}
