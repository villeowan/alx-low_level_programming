#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: input string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int l = 0, k, m;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		m = l / 2;
	else
		m = (l + 1) / 2;
	for (k = m; k < l; k++)
		_putchar(str[k]);
	_putchar('\n');
}
