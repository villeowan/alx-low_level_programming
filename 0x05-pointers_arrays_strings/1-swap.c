#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: input integer pointer
 * @b: input integer pointer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
