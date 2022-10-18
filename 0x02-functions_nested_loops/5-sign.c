#include "main.h"

/**
 * print_sign - i will swear for betty
 * @n: the int to check
 * Return: 1 blah blah blah
 * 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
