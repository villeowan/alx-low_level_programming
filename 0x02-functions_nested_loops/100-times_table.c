#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: input value
 * Return: Nothing
 */

void print_times_table(int n)
{
	int k, l;

	if (n > 0 && n < 15)
	{
		for (k = 0; k < n; k++)
		{
			_putchar('0');
			for (l = 1; l <= n; l++)
				putformat(k * l);
			_putchar('\n');
		}
	}
}

/**
 * putformat - formatted characters to output
 * @n: number to format
 * Return: Nothing
 */

void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
