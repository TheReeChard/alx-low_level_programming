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
			if (Ree > 5)
			{
			printf("Last digit of %d is %d and is greater than 5\n", Ree);
			}
			else if (Ree == 0)
			{
			printf("Last digit of %d is %d and is 0\n", n, Ree);
			}
			else if (Ree < 6 && Ree != 0)
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Ree);
			}
			return (0);
}
