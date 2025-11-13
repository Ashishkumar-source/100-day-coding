// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int n1, n2, i, hcf;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    // Find HCF
    for(i = 1; i <= n1 && i <= n2; ++i) {
        // Check if i is a factor of both numbers
        if(n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }

    printf("%d\n", hcf);
    return 0;
}
