#include <cs50.h>
#include <stdio.h>

int main(void)
{
	float bill = get_float("Bill before tax and tip: ");
	float tax = get_float("Sale tax percent: ");
	float tip = get_float("Tip percent: ");
	float total = (bill * (1 + tax/100) * (1 + tip/100))/2;
	printf("You will owe $%.2f each!\n", total);
	return 0;
}

