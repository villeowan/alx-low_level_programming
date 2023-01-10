#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @c: array of pointers
 *
 * Return: void
 */

void print_chessboard(char (*c)[8])
{
	int k, l;

	for (k = 0; k <= 7; k++)
	{
		for (l = 0; l <= 7; l++)
		{
			_putchar(c[k][l]);
		}
		_putchar(10);
	}
}
