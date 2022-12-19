#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k, sum, l;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		pass[k] = rand() % 78;
		sum += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			l = 2772 - sum - '0';
			sum += l;
			putchar(l + '0');
			break;
		}
	}

	return (0);
}
