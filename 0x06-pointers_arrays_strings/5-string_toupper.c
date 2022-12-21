#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @str: string of characters to be changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)
{
	int k = 0;

	while (str[k])
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] -= 32;
		k++;
	}

	return (str);
}
