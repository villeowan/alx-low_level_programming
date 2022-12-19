#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: input string
 * Return: Always 0
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
