#include "stdio.h"
/**
 * print_alphabet() - will print alphabets
 *
 */
void print_alphabet(void)
{
	char ReeChard;
	
	while (count < 10)
	{
		for (ReeChard = 'a'; ReeChard <= 'z'; ++ReeChard)
		putchar(ReeChard);
	putchar('\n');
		count++;
	}
	
}
