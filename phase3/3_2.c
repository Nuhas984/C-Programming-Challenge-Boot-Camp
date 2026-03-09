/*
How many numbers? 4
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30
Enter number 4: 40
Sum = 100
*/

#include <stdio.h>
int main()
{
    int count, sum = 0, a, number;
    printf("how many numbers?\n");
    scanf("%d", &count);

    for (a = 1; a <= count; a++)
    {
        printf("Number %d :", a);
        scanf("%d", &number);
        sum = sum + number;
    }
    printf("The sum is %d", sum);
    return 0;
}