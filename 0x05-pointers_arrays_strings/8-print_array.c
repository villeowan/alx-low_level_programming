#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: input array
 * @n: input integer
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");
	}
	putchar('\n');
}
