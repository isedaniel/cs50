#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void)
{
    int number = get_int("Please insert a number: ");
    printf("Factorial is: %d\n", factorial(number));
    return 0;
}

int factorial(int n)
{
    if (n == 2)
    {
        return n;
    }
    return n * factorial(n - 1);
}

