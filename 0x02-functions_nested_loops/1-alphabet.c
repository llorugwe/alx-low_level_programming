#include <stdio.h>

/**
 * main - main function
 *print_alphabet: the function prints alphabet
 * Return: returns 0 when successful
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
