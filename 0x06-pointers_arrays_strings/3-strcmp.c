#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string
 * Return: The difference s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (char *s1 && char *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
