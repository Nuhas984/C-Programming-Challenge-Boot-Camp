/*
 * CHALLENGE: SWAP Meet
 * DESCRIPTION: Demonstrates how to swap the values of two variables using a temporary variable.
 * TOPICS: Variables, Variable Assignment, Swap Logic
 */

#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Get initial values from user
    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);
    
    // Swap logic using a temporary variable
    temp = a;   // Store value of a in temp
    a = b;      // Assign value of b to a
    b = temp;   // Assign value of temp (original a) to b
    
    printf("Your numbers have been swapped!\n");
    printf("Now a: %d, b: %d\n", a, b);
    
    return 0;
}
