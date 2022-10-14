#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description : 'this program should print positive or negative
 * Return: (0) success
 */
int main(void)
{
	int n, Ree;

	srand(time(0));
			n = rand() - RAND_MAX / 2;
			Ree = n % 10;
			printf("The last digit of %d is %d and is", n, Ree);
			if (Ree > 5)
			{
			printf(" greater than 5\n", Ree);
			}
			else if (Ree == 0)
			{
			printf(" 0\n");
			}
			else if (Ree < 6 && Ree != 0)
			{
			printf("Less than 6 and not 0\n");
			}
			return (0);
}
