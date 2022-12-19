#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		*(dest + k) = *(src + k);
	}
	*(dest + k) = '\0';
	return (dest);
}
