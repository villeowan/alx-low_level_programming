#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0.
 */

int main(void)
{
	long int k, l;

	k = 612852475143;
	for (l = 2; l <= k; l++)
	{
		if (k % l == 0)
		{
			k /= l;
			l--;
		}
	}
	printf("%ld\n", l);
	return (0);
}
