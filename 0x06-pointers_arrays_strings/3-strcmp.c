#include "main.h"
/**
 * _strcmp - compares two strigs
 * @s1: string one
 * @s2: string two
 * Return: return less than zero if a is less than b
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if(*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
