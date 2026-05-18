#include <stdio.h>
int factorial(int n){
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}
int main() {
int number;
scanf("%d",&number);
if (number<0)
{
printf("Factorial is not defined");
}
else{
    int result = factorial(number);
    printf("%d! = %d",number,result);
}
    return 0;
}