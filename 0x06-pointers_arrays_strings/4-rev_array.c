#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses contents of an array
 * @a: input array
 * @n: number of elements in the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int t, k;

	for (k = n - 1; k >= n / 2; k--)
	{
		t = a[n - 1 - k];
		a[n - 1 - k] = a[k];
		a[k] = t;
	}
}
