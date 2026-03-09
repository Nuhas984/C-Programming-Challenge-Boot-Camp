// Ask the user for a single integer. Print "Even" if it's divisible by 2, otherwise "Odd".
#include <stdio.h>
int main()
{
    // ask user for an integer number
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    // The single line logic
    if (a % 2 == 0)
    {
        printf("'%d' is even Number\n", a);
    }
    else
    {
        printf("'%d' is odd number\n", a);
    }
    return 0;
}