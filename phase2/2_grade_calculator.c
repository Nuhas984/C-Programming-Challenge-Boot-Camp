/*
 * CHALLENGE: Grade Calculator
 * DESCRIPTION: Assigns a letter grade (A-F) based on a numeric score provided by the user.
 * TOPICS: Multiple Conditionals (else-if), Input Validation
 */

#include <stdio.h>

int main() {
    int score;
    
    // Get numeric score (0-100)
    printf("Enter your score: ");
    scanf("%d", &score);

    // Initial check for input validity
    if (score < 0 || score > 100) {
        printf("Error: Invalid score. Please enter a value between 0 and 100.\n");
    } else if (score >= 90) {
        printf("Excellent, You got an A!\n");
    } else if (score >= 80) {
        printf("Good, You got a B.\n");
    } else if (score >= 70) {
        printf("Not bad, You got a C.\n");
    } else if (score >= 60) {
        printf("You got a D.\nScore is close to failing, be better prepared for next time!\n");
    } else {
        printf("You got an F.\nKeep studying and try again!\n");
    }
    
    return 0;
}
