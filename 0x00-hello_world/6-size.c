#include<stdio.h>
/**
 * main - Entry Point
 *
 * This Program should print the sizes of various data types
 *
 * The various sizes are dependent on the architecture
 *
 * of the systems it is being ran oo
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
