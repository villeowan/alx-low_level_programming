#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
	putchar(w);
	for (w = 'A'; w <= 'Z'; w++)
	putchar(w);
	putchar('\n');

	return (0);
}
