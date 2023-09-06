#include <stdio.h>
#include "main.h"

/**
 * _putchar - This writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On success returns  1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}i
