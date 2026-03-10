/*
 * CHALLENGE: Leap Year Checker
 * DESCRIPTION: Checks if a given year is a leap year based on divisibility rules.
 * TOPICS: Conditionals, Leap Year Logic, Nested Conditions
 */

#include <stdio.h>

int main() {
    int year;
    
    // Get year input from the user
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Leap year rules:
    // 1. If divisible by 400, it's a leap year.
    // 2. Else if divisible by 100, it's NOT a leap year.
    // 3. Else if divisible by 4, it's a leap year.
    // 4. Otherwise, it's not a leap year.
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}
