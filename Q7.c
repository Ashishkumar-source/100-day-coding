#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before swapping:");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

