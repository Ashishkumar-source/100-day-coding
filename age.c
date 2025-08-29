#include <stdio.h>

int main() {
    int ram, shyam, ajay;

    printf("Enter age of Ram: ");
    scanf("%d", &ram);

    printf("Enter age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter age of Ajay: ");
    scanf("%d", &ajay);

    if (ram < shyam && ram < ajay) {
        printf("Ram is the youngest.\n");
    } 
    else if (shyam < ram && shyam < ajay) {
        printf("Shyam is the youngest.\n");
    } 
    else if (ajay < ram && ajay < shyam) {
        printf("Ajay is the youngest.\n");
    } 
    else {
        printf("Two or more are of the same youngest age.\n");
    }

    return 0;
}
