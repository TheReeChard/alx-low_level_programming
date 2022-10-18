#include <stdio.h>
#include <math.h>
/**
 * _abs - gets absolute value
 * @n: the int to be checked
 * Return: valu to be returned
 */
int print_last_digit(int n)
{
  int i;
  if (n < 0)
    n = -n;
    i = n % 10;
  return (i);
  
}
