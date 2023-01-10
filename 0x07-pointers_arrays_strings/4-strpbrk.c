#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: first occurrence in the string
 * @accept: searching string
 *
 * Return: new string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
