#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // for unique random number
    int number = (rand() % 100) + 1;
    int guess;
    int attempts = 0;
    do
    {
        printf("Enter a guess: \n");
        scanf("%d", &guess);
        attempts ++;
        if (guess == number)
        {
            printf("Congrates! You take %d guesses\n",attempts);
        }
        else if (guess < number)
        {
            printf("guess higher\n");
        }
        else
        {
            printf("guess lower\n");
        }

    } while (number != guess);
    return 0;
}