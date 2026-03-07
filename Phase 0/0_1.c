
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: "); // No \n here
    scanf("%s",name);

    printf("Hello, %s!\n", name); // Added \n here for a clean exit
    printf("modified");
    return 0;
}