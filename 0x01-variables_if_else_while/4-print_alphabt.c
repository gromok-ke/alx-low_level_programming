#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Program to print lowercase alphabet a-z except q & e
 *
 * Return: End point to the program. should be 0
 */

int main(void)
{
	char alphabet;

	/*print all characters except q and e*/

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}

	putchar('\n');

	return (0);
}
