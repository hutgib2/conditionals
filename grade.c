#include <stdio.h>

int main(void)
{
    int i;
    //ask the user for a percentage
    printf("insert percentage for grade: ");
    scanf("%d", &i);

    // check grade
    if (i >= 90)
        printf("you get an A, your literally smarter than William James Sidis.");
    else if (i >= 80)
        printf("you get a B.");
    else if (i >= 70)
        printf("you get a C.");
    else if (i >= 60)
        printf("you get a D, your mid.");
    else if (i >= 50)
        printf("you get a E.");
    else
        printf("you get an F, your brain is as smooth as a baby's bottom.");
}