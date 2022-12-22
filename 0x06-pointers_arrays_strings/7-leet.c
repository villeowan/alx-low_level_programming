#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string int o 1337
 * @s: input string
 * Return: encoded string
 */

char *leet(char *s)
{
	int count = 0, i;
	int lc[] = {97, 101, 111, 116, 108};
	int uc[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lc[i] || *(s + count) == uc[i])
			{
				*(s + count) = num[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
