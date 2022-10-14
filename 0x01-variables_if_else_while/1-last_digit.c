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
	int n, ReeChard;

	srand(time(0));
			n = rand() - RAND_MAX / 2;
			ReeChard = n % 10;
			if (ReeChard > 5)
			{
			printf("Last digit of %d is %d and is greater than 5\n", ReeChard);
			}
			else if (ReeChard == 0)
			{
			printf("Last digit of %d is %d and is 0\n", n, ReeChard);
			}
			else if (ReeChard < 6 && ReeChard != 0)
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ReeChard);
			}
			return (0);
}
