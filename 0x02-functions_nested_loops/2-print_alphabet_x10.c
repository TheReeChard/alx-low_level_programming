#include "stdio.h"
/**
 * print_alphabet() - will print alphabets
 *
 */
void print_alphabet_x10(void)
{
	char ReeChard;
	char count;
	
	while (count < 10)
	{
		for (ReeChard = 'a'; ReeChard <= 'z'; ++ReeChard)
		putchar(ReeChard);
	putchar('\n');
		count++;
	}
	
}
