#include "main.h"

/**
 * print_diagonal - funtion that draws a straight line in the terminal
 *
 * @n:number of times the character _ should be printed
 *
 */
void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;
		
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
