#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0 when successful
 */
int main(void)
{
	int i;
	int j;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	j = 65;
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
