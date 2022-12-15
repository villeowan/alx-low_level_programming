#include "main.h"

/**
 * times_table - prints the 9-times table starting with 0
 * Return: Nothing
 */

void times_table(void)
{
	int k, l, m;

	for (k = 0; k <= 9;  k++)
	{
		for (l = 0; l <= 9; l++)
		{
			m = k * l;

			if ((m / 10) == 0)
			{
				if (l != 0)
					_putchar(' ');
				_putchar(m + '0');

				if (l == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				if (l == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
