#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9
 * except 2, 4 followed by a new line
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int l = '0';

	for (; l <= '9'; l++)
	{
		if (l != '2' && l != '4')
			_putchar(l);
	}
	_putchar('\n');
}
