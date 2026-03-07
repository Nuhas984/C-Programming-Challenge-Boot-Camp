/*
Task 1.1: Basic Arithmetic
Write a program that:

Asks the user for two integers.

Stores them in variables.

Prints their sum, difference, product, and quotient (as a float).
*/
#include <stdio.h>

int main()
{
    // declare a, b
    int a, b;
    // take a, b from user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    // addition of a and b
    printf("The sum is %d + %d = %d\n", a, b, a + b);
    //subtraction of a and b
    printf("The different is %d - %d = %d\n", a, b, a - b);
    //product of a and b
    printf("The product is %d * %d = %d\n", a, b, a * b);
    //division needs logic because 0 / 0 is undefined...
if (b != 0)
{
    printf("The division is %d / %d = %.2f\n", a, b, (float)a / b);
}
else{
    printf("The division is undefined");
}
return 0;

}