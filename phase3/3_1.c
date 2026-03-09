/*
Task 3.1: Multiplication Table
Write a program that:
1. Asks the user for a single integer.
2. Prints its multiplication table from 1 to 10
3. The users hate number 7, so everytime skip the (something * 7)
*/

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        if (i != 7)
        {
            printf("%d * %d = %d\n", num, i, num * i);
        }
        else
        {
            printf("bad number, skipped\n");
        }
    }
    return 0;
}