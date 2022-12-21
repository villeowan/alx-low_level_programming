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
	int index = 0, srcl = 0;

	while (src[index++])
		srcl++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = srcl; index < n; index++)
		dest[index] = src[index];
	for (index = srcl; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
