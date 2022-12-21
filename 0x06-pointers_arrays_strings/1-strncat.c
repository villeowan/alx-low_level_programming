#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srcl = 0, k = 0;
	char *t = dest, *s = src;

	while (*src)
	{
		srcl++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > srcl)
		n = srcl;
	src = s;

	for (; k < n; k++)
		*dest++ = *src++;
	*dest = '\0';
	return (t);
}
