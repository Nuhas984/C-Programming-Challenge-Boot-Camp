#include <stdio.h>
long long factorial(int n){
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}
int main() {
int number;
printf("Enter a non negative-integer\n");
scanf("%d",&number);
if (number<0)
{
printf("Factorial is not defined");
}
else{
    long long result = factorial(number);
    printf("%d! = %lld",number,result);
}
    return 0;
}