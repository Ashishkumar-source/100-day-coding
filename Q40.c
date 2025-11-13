// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[32];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Flip each bit
    for(i = 0; i < strlen(binary); i++) {
        if(binary[i] == '1')
            binary[i] = '0';
        else if(binary[i] == '0')
            binary[i] = '1';
    }

    printf("%s\n", binary);
    return 0;
}
