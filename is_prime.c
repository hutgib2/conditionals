#include <stdio.h>

//this function tells us if a number is prime
int is_prime(int number)
{
    int i;
    
    if (number < 2) 
        return 0;

    i = 2;
    while (i < number)
    {
        if (number % i == 0)
            return 0;
        i++;   
    }
    return 1;   
}

int main(void)
{
    int number;

    // ask the user for a number
    printf("insert number: ");
    scanf("%d", &number);

    //check if number is prime 
    if (is_prime(number))
        printf("%d is prime", number);
    else
        printf("%d is not prime", number);
}