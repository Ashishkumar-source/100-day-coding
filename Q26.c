/* Write a program to print numbers from 1 to n. */


#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" "); // Print space between numbers
        }
    }
    printf("\n");

    return 0;
}
