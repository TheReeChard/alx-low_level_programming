#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * except 2 and 4
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	char num = 48;

	while (num <= 57)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
