#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * followed by a new line
 * @s: input string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int l = 0, k = 0;
	char swp;

	while (s[l] != '\0')
		l++;
	while (k < l--)
	{
		swp = s[k];
		s[k++] = s[l];
		s[l] = swp;
	}
}
