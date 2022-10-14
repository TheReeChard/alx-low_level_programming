#include <stdio.h>
/**
 * main -this betty is annoying
 *
 * Return: she is annoying ohhhhh
 */
int main(void)
{
	int ReeChard;

	for (ReeChard = '0'; ReeChard <= '9'; ++ReeChard)
	{
		putchar(ReeChard);
		if (ReeChard != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
