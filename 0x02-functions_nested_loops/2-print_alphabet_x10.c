/**
 * print_alphabet_x10 - function to print alphabets 10x when called
 *
 */

#include "main.h"

void print_alphabet_x10(void)
{
	char i = 0, j;

	while (i < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
