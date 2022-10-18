#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all the multiples in question 13
 * Return: Always 0
 */
int main(void)
{
	long long int a, b, total;
	int i;

	a = 0;
	b = 0;
	total = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		} else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	total = a + b;
	printf("%lld\n", total);
	return (0);
}
