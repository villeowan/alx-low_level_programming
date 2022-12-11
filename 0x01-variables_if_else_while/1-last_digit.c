#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int y;

	srand(time(0));
	y = rand() - RAND_MAX / 2;

	if (y % 10 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", y, y % 10);
	else if (y % 10 == 0)
	printf("Last digit of %d is %d and is 0\n", y, y % 10);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", y, y % 10);

	return (0);
}
