#include <stdio.h>

int main(void)
{
    int i;
    // ask the user for a number
    printf("insert number: ");
    scanf("%d", &i);

    // check if the number is even or odd
    if (i % 2 == 0)
        printf("your number is even");
    else
        printf("your number is odd");        
}