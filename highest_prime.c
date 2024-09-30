#include <stdio.h>

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
    int i;

    // ask the user for a number
    printf("insert number: ");
    scanf("%d", &number);
    
    //find the highest prime less than number
    i = number - 1;
    while (i > 2) 
    {
        if (is_prime(i))
        {
            printf("%d", i);
            return 0;
        }
        i--;
    }
}