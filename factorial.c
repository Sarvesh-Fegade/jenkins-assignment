#include <stdio.h>

// code for factorial of a number for given number
int main()
{
    int i, fact = 1, number = 3;
    for (i = 1; i <= number; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d\n", number, fact);
    return 0;
}