#include "main.h"
/**
 * _strncpy - copy the string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: return resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' &&  a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
