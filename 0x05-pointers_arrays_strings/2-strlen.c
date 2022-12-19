#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
