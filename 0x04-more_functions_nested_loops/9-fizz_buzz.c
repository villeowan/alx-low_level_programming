#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k = 1;

	for (; k < 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
			printf("FizzBuzz ");
		else if (k % 3 == 0)
			printf("Fizz ");
		else if (k % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", k);
	}
	printf("Buzz\n");

	return (0);
}
