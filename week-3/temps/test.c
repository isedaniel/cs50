#include <stdio.h>

void swap(int a, int b)
{
    printf("a is %i\n", a);
    printf("b is %i\n", b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("now a is %i\n", a);
    printf("now b is %i\n", b);
}

int main(void)
{
    int a, b;

    a = 1;
    b = 2;
    swap(a, b);
    a = 3;
    b = -14;
    swap(a, b);
    a = 22;
    b = -773;
    swap(a, b);
    return 0;
}
