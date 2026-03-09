// Leap year checker
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    // printf("%d is ok", year);
    if (year % 100 == 0 && year % 400 == 0)
    {
        printf("This is a leap year\n");
    }
    else if (year % 4 == 0 && year % 400 ==0)
    {
        printf("This is a leap Year\n", year);
    }
    else
    {
        printf("not a leap year\n");
    }
    
    return 0;
}