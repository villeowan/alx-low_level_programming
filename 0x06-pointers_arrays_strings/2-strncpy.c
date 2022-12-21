#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copys the strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srcl = 0, k = 0;
	char *t = dest, *s = src;

	while (*src)
	{
		srcl++;
		src++;
	}

	srcl++;

	if (n > srcl)
		n = srcl;
	src = s;

	for (; k < n; k++)
		*dest++ = *src++;
	return (t);
}
