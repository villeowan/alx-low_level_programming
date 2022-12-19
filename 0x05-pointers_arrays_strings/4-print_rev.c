#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: input string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	while (k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
