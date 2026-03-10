/*
 * CHALLENGE: The Echo
 * DESCRIPTION: Takes a name as input from the user and greets them.
 * TOPICS: User Input, Strings, scanf, printf
 */

#include <stdio.h>

int main() {
    char name[50];
    
    // Ask the user for their name
    printf("Enter your name: ");
    
    // Read the user input (up to 49 characters to avoid overflow)
    scanf("%s", name);
    
    // Print the personalized greeting
    printf("Hello, %s!\n", name);
    
    return 0;
}
