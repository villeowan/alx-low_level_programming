#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c - the character to pring
 *
 * Return: On success 1
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
