// Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int num, i;
    
    // Read input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Print all factors of the number
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
