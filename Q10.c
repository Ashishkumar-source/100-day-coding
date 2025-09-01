#include <stdio.h>

int main() {
    int totalSecond, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSecond);

    hours = totalSecond / 3600;
    minutes = (totalSecond % 3600) / 60;
    seconds = totalSecond % 60;

    printf("Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
