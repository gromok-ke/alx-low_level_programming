#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet in reverse
 *
 * Return: end point
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
