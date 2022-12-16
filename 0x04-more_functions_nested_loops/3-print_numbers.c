#include "main.h"

/**
 * print_numbers - prints numbers from  (0 to  9)
 * followed by a new line
 * Return: Always 0
 */

void print_numbers(void)
{
	int l = '0';

	for (; l <= '9'; l++)
		_putchar(l);
	_putchar('\n');
}
