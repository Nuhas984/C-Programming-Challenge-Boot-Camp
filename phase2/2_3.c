// Leap year checker
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    // printf("%d is ok", year);
if(year % 400 == 0 || year % 4 == 0) {
printf("%d This is a leap Year\n", year);
}
    return 0;
}