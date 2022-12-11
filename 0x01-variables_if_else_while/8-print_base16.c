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
	int x;
	char w;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (w = 'a'; w <= 'f'; w++)
		putchar(w);
	putchar('\n');

	return (0);
}
