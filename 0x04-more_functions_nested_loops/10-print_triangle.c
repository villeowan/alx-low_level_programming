#include "main.h"

/**
 * print_triangle - prints triangle followed bu a new line
 * @size: integer input
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int k = 0, l, m = size - 1;

	if (size > 0)
	{
		for (; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{
				if (l < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
