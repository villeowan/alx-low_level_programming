#include <stdio.h>

/**
 * main - prints lines
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j;

	while (i < 5)
	{
		j = 0;

		while (j < 3)
		{
			printf("2");
			
			j++;
		}

		printf("\n");
		
		i++;
	}

	return (0);
}

