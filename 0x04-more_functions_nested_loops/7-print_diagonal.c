#include "main.h"

/**
 * print_diagonal - funtion that draws a straight line in the terminal
 *
 * @n:number of times the character _ should be printed
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar (32);
			}
		_putchar('\n');
		}
	}
}
