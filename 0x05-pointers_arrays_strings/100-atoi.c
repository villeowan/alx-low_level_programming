#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: integer from conversation
 */

int _atoi(char *s)
{
	int sgn = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sgn *= -1;
		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}
	if (sgn < 0)
		total = (-total);
	return (total);
}
