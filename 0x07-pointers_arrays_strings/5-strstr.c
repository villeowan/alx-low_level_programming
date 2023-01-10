#include "main.h"
#include <stdio.h>
/**
 * _strstr -locates first occurrence of the substring needle in the string haystack
 * @haystack: main string to be examined
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or 0 if it is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
