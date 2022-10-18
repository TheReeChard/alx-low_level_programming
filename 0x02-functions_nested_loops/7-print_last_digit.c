#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - will print modulo 10
 * @n: meh
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;

	i = n % 10;

	if (i < 0)
		i = -i;

	printf("%ld",i);

	return (i);
}
