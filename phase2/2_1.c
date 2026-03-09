//Ask the user for a single integer. Print "Even" if it's divisible by 2, otherwise "Odd".
#include <stdio.h>
int main() {
int a;
printf("Enter an integer:");
scanf("%d", &a);
if (a % 2)
{
printf("'%d' is even Number",a);
}
else
{
    printf("'%d' is odd number",a);
}










    return 0;
}