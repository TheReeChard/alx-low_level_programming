#include <stdio.h>
/**
 * main -this betty is annoying
 *
 * Return: she is annoying ohhhhh
 */
int main(void)
{
	char ReeChard = 'a';

	while (ReeChard <= 'z')
	{
		if (ReeChard != 'e' && ReeChard != 'q')
		{
			putchar(ReeChard);
		}
		ReeChard++;
	}
	putchar('\n');
	return (0);
}
