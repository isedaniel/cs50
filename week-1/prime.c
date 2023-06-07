#include <cs50.h>
#include <stdio.h>

int prime(int n);

int main(void)
{
	int min = get_int("Min: ");
	int max = get_int("Max: ");
	if (min == 1)
	{
		min = 2;
	}

	for (int i = min; i <= max; i++) 
	{
		if (prime(i))
		{
			printf("%i\n", i);
		}
	}
	return 0;
}

int prime(int n)
{
	for (int i = 2; i * i <= n; i++) 
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
