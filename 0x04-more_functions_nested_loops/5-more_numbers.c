#include "main.h"

/**
 * more_numbers - function that prints numbers from 0 to 9
 * except 2 and 4
 *
 * Return: returns void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char num = 0;

	while (num <= 14)
	{
		if (num >= 10)
			_putchar(num / 10 + '0');
	_putchar(num % 10 + '0');
		num++;
	}
	_putchar('\n');
	}
}
