#include <stdio.h>

/**
 * main - will causes an infinite loop to occur
 * Return: returns 0 when successful
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	*while (i < 10) increment to i has been left out
	*{
	*	putchar(i);
	*}
	*/
	printf("infinity loop avoided! \\o/\n");

	return (0);
}
