/*
 * CHALLENGE: Multiplication Table
 * DESCRIPTION: Prints the multiplication table (1-10) for a user-input number, skipping multiplication by 7.
 * TOPICS: For Loops, If-Else, Continue-style logic
 */

#include <stdio.h>

int main() {
    int num, i;
    
    // Get base number for the table
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Loop through values 1 to 10
    for (i = 1; i <= 10; i++) {
        // Condition: skip the number 7
        if (i != 7) {
            printf("%d * %d = %d\n", num, i, num * i);
        } else {
            printf("(Multiplication by 7 skipped - users hate it!)\n");
        }
    }
    
    return 0;
}
