/*
 * CHALLENGE: Guess the Number
 * DESCRIPTION: A simple game where the user tries to guess a random number between 1 and 100.
 * TOPICS: Random Number Generation (rand), Do-While Loops, User Feedback
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator using current time
    srand(time(NULL));
    
    // Generate a random number between 1 and 100
    int number = (rand() % 100) + 1;
    int guess;
    int attempts = 0;
    
    printf("--- Guess the Number Game ---\n");
    
    // Loop until the correct number is guessed
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess == number) {
            printf("Congratulations! You found it in %d attempts.\n", attempts);
        } else if (guess < number) {
            printf("Higher...\n");
        } else {
            printf("Lower...\n");
        }
    } while (guess != number);
    
    return 0;
}
