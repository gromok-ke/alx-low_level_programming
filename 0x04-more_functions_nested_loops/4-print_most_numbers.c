#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 */

void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}

	putchar('\n');
}
