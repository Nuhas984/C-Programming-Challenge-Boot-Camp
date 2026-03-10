/*
 * CHALLENGE: Even/Odd Checker
 * DESCRIPTION: Determines whether a user-provided integer is even or odd using the modulo operator.
 * TOPICS: Conditionals (if-else), Modulo Operator (%)
 */

#include <stdio.h>

int main() {
    int a;
    
    // Get integer from the user
    printf("Enter an integer: ");
    scanf("%d", &a);
    
    // Logic: if number % 2 is 0, it's even; otherwise, it's odd
    if (a % 2 == 0) {
        printf("'%d' is an Even number\n", a);
    } else {
        printf("'%d' is an Odd number\n", a);
    }
    
    return 0;
}
