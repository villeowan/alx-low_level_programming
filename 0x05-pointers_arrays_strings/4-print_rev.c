#include "main.h"
#include <stdio>

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: input string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (l)
		_putchar(s[--l]);
	_putchar('\n');
}
