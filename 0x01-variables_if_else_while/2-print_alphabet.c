#include <stdio.h>

/**
 * main -entry point
 *
 * Description: this code prints lowercase characters a-z
 *
 * Return: End point always 0
 */

int main(void)
{
	char alphabet;
	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
