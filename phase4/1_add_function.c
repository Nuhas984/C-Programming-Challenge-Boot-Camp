/*
 * CHALLENGE: Add Function
 * DESCRIPTION: Defines a custom function to calculate the sum of two integers.
 * TOPICS: Functions, Return Values, Function Calls
 */

#include <stdio.h>

/**
 * add - Returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * 
 * Return: the sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2, result;
    
    // Get user input for two numbers
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    
    // Call the 'add' function and store the result
    result = add(n1, n2);
    
    // Display the result
    printf("Result: %d\n", result);
    
    return 0;
}
