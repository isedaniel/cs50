#include <stdio.h>
#include <string.h>
#include <math.h>

long convert(const char N[])
{
    if (strlen(N) == 1)
    {
        int num = N[0] - '0';
        return num;
    }
    char new[10];
    strncpy(new, N+1, strlen(N));
    return (N[0] - '0') * pow(10, strlen(N) - 1)  + convert(new);
}

int main(void)
{
    char num[10];
    printf("Enter a number: ");
    scanf("%s", num);
    printf("Your number is: %li", convert(num));
    printf("\n");
    return 0;
}

