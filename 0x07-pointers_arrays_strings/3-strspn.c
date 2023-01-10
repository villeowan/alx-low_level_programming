#include "main.h"
#include <stdio.h>
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: source string
 * @accept: searching string
 * Return: new string
 */

unsigned int _strspn(char *s, char *accept)
{
	int f = 0, g, h;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] != 32)
		{
			for (h = 0; accept[h] != '\0'; h++)
			{
				if (s[g] == accept[h])
					f++;
			}
		}
		else
			return (f);
	}
	return (f);
}
