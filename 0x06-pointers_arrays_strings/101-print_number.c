#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int k, l, count;

	if (n < 0)
	{
		_putchar(45);
		k = n * -1;
	}
	else
	{
		k = n;
	}

	l = k;
	count = 1;

	while (l > 9)
	{
		l /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((k / count) % 10) + 48);
	}
}
