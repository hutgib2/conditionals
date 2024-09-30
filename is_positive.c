#include <stdio.h>

int main(void)
{
    int i;
    // ask the user for a number
    printf("insert number: ");
    scanf("%d", &i);

    // check if the number is positive or negative(0 is positive)
    if (i >= 0)
        printf("your number is positive");
    else
        printf("your number is negative");        
}