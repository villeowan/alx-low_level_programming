#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char g;

	for (g = 'z'; g >= 'a'; g--)
		putchar(g);
	putchar('\n');

	return (0);
}
