#include "main.h"

/**
 * _isalpha - checks if the char is an alphabet
 * @c: the character that will be checked
 * Return: 1 if c is a letter, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
