#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	char w;
	int x;
	long int y;
	long long int z;
	float v;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(w));

	printf("Size of an int: %lu.\n", (unsigned long)sizeof(x));

	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(y));

	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(z));

	printf("Size of a float: %lu.\n", (unsigned long)sizeof(v));
	return (0);
}
