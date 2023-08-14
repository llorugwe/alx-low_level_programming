#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0 when successful
 */
int main(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		putchar(letter);

	}

	for (letter = 'A'; letter <= 'Z' ; letter++)

	{
		putchar(letter);

	}

	putchar('\n');

	return (0);
}
