#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int k;

	char l;

	for (k = 0; k <= 9; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
