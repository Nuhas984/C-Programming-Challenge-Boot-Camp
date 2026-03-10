/*
 * CHALLENGE: Sum of Numbers
 * DESCRIPTION: Asks the user how many numbers they want to add, then calculates the total sum.
 * TOPICS: Loops, Accumulator Variables (sum += n)
 */

#include <stdio.h>

int main() {
    int count, sum = 0, i, number;
    
    // Ask for the number of inputs
    printf("How many numbers would you like to sum? ");
    scanf("%d", &count);

    // Loop until we've collected 'count' numbers
    for (i = 1; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum = sum + number; // Add input to the running total
    }
    
    // Output final result
    printf("Total Sum = %d\n", sum);
    
    return 0;
}
