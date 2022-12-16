#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int k, l = 0;

	for (; l < 10; l++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
