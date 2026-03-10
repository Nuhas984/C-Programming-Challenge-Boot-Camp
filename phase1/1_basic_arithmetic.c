/*
 * CHALLENGE: Basic Arithmetic
 * DESCRIPTION: Performs addition, subtraction, multiplication, and division on two user-provided integers.
 * TOPICS: Arithmetic Operators, Float Division, Conditionals
 */

#include <stdio.h>

int main() {
    int a, b;
    
    // Input two integers from the user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    // Addition
    printf("The sum is %d + %d = %d\n", a, b, a + b);
    
    // Subtraction
    printf("The difference is %d - %d = %d\n", a, b, a - b);
    
    // Multiplication
    printf("The product is %d * %d = %d\n", a, b, a * b);
    
    // Division with error checking for division by zero
    if (b != 0) {
        printf("The division is %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("The division is undefined (cannot divide by zero)\n");
    }
    
    return 0;
}
