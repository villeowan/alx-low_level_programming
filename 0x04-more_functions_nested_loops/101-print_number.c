#include "main.h"

/**
 * print_number - prints number
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int k;

	k = n;
	if (n < 0)
	{
		_putchar(45);
		k = -n;
	}
	if (k / 10)
		print_number(k / 10);
	_putchar((k % 10) + '0');
}
