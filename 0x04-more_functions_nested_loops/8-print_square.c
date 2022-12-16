#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int k, l;

	if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (l = 0; l < size; l++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
