/*Ask for a score (0–100). Print the letter grade:

A: 90–100

B: 80–89

C: 70–79

D: 60–69

F: below 60

If the score is outside 0–100, print "Invalid score". */
#include <stdio.h>

int main()
{
    int score;
    printf("Enter your score\n");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("invalid score\n");
    }

    else if (score >= 90)
    {
        printf("Excellent, You got an A\n");
    }

    else if (score >= 80)
    {
        printf("GOOD, You got B\n");
    }
    else if (score >= 70)
    {
        printf("Not Bad, You got C\n");
    }
    else if (score >= 60)
    {
        printf("You got D.\nScore is close to fail, be prepared for the next exam\n");
    }
    else
        {
            printf("You got F\n");
        }
    return 0;
}