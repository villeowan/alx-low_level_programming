#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input string
 * Return: Always 0
 */

void puts2(char *str)
{
	int l = 0, k = 0;

	while (str[l] != '\0')
		l++;
	l -= 1;

	for (; k <= l; k += 2)
		_putchar(str[k]);
	_putchar('\n');
}
