#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
