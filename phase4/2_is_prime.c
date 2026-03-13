// prime or not prime
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    else if (number == 2)
    {
        return true;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
int num;
printf("Enter a number\n");
scanf("%d", &num);

if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    
    return 0;
}