#include <stdio.h>

/**
 * main - entry point of program
 * Return: should return 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, total;

	j = 1;
	k = 2;
	total = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			total = total + j;
		}
		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", total);

	return (0);
}
