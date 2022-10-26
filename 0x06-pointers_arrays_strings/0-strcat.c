#include "main.h"
/**
 * _strcat - prototype that concatenates
 * @dest: string that should be appended to
 * @src: string to be appended
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
